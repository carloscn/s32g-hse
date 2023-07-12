/**
 *   @file    printf.c
 *
 *   @brief   printf implementation using uart driver
 *
 *   @addtogroup printf
 *   @{
 */
/*==================================================================================================
*
*   Copyright 2019-2020 NXP
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/

/*=============================================================================
                       INCLUDE FILES
=============================================================================*/

#include "config.h"
#include "printf.h"
#include "Serial.h"

#include <string.h>

#ifdef UART_SUPPORT

/*=============================================================================
                       LOCAL CONSTANTS
=============================================================================*/

const unsigned char startChar = 17U;
const unsigned char endChar = 18U;

/*=============================================================================
                  LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=============================================================================*/
#ifdef FALSE
#undef FALSE
#endif
#define FALSE        (0)

#ifdef TRUE
#undef TRUE
#endif
#define TRUE        (1)

#ifdef NULL
#undef NULL
#endif
#define NULL        (0)


#define FLAGS_MINUS        (0x01)
#define FLAGS_PLUS        (0x02)
#define FLAGS_SPACE        (0x04)
#define FLAGS_ZERO        (0x08)
#define FLAGS_POUND        (0x10)

#define IS_FLAG_MINUS(a)    (a & FLAGS_MINUS)
#define IS_FLAG_PLUS(a)        (a & FLAGS_PLUS)
#define IS_FLAG_SPACE(a)    (a & FLAGS_SPACE)
#define IS_FLAG_ZERO(a)        (a & FLAGS_ZERO)
#define IS_FLAG_POUND(a)    (a & FLAGS_POUND)

#define LENMOD_h        (0x01)
#define LENMOD_l        (0x02)
#define LENMOD_L        (0x04)

#define IS_LENMOD_h(a)    (a & LENMOD_h)
#define IS_LENMOD_l(a)    (a & LENMOD_l)
#define IS_LENMOD_L(a)    (a & LENMOD_L)

#define FMT_d    (0x0001)
#define FMT_o    (0x0002)
#define FMT_x    (0x0004)
#define FMT_X    (0x0008)
#define FMT_u    (0x0010)
#define FMT_c    (0x0020)
#define FMT_s    (0x0040)
#define FMT_p    (0x0080)
#define FMT_n    (0x0100)

#define IS_FMT_d(a)        (a & FMT_d)
#define IS_FMT_o(a)        (a & FMT_o)
#define IS_FMT_x(a)        (a & FMT_x)
#define IS_FMT_X(a)        (a & FMT_X)
#define IS_FMT_u(a)        (a & FMT_u)
#define IS_FMT_c(a)        (a & FMT_c)
#define IS_FMT_s(a)        (a & FMT_s)
#define IS_FMT_p(a)        (a & FMT_p)
#define IS_FMT_n(a)        (a & FMT_n)

/*=============================================================================
                       LOCAL VARIABLES
=============================================================================*/

/*=============================================================================
                       LOCAL FUNCTION PROTOTYPES
=============================================================================*/

/*=============================================================================
                       GLOBAL VARIABLES
=============================================================================*/

/*=============================================================================
                       LOCAL FUNCTIONS
=============================================================================*/

static void printk_putc (int c, int *count, PRINTK_INFO *info)
{
    switch (info->dest)
    {
        case DEST_CONSOLE:
        {
            info->func((char)c);
            break;
        }

        case DEST_STRING:
        {
            *(info->loc) = (unsigned char)c;
            ++(info->loc);
            break;
        }

        default:
            break;
    }
    *count += 1;
}


static int printk_mknumstr (char *numstr, void *nump, int neg, int radix)
{
    int a,b,c;
    unsigned int ua,ub,uc;

    int nlen;
    char *nstrp;

    nlen = 0;
    nstrp = numstr;
    *nstrp++ = '\0';

    if (neg)
    {
        a = *(int *)nump;
        if (a == 0)
        {
            *nstrp = '0';
            ++nlen;
            return nlen;
        }
        while (a != 0)
        {
            b = (int)a / (int)radix;
            c = (int)a - ((int)b * (int)radix);
            if (c < 0)
            {
                c = ~c + 1 + '0';
            }
            else
            {
                c = c + '0';
            }
            a = b;
            *nstrp++ = (char)c;
            ++nlen;
        }
    }
    else
    {
        ua = *(unsigned int *)nump;
        if (ua == 0)
        {
            *nstrp = '0';
            ++nlen;
            return nlen;
        }
        while (ua != 0)
        {
            ub = (unsigned int)ua / (unsigned int)radix;
            uc = (unsigned int)ua - ((unsigned int)ub * (unsigned int)radix);
            if (uc < 10)
            {
                uc = uc + '0';
            }
            else
            {
                uc = uc - 10 + 'A';
            }
            ua = ub;
            *nstrp++ = (char)uc;
            ++nlen;
        }
    }

    return nlen;
}


static void printk_pad_zero (int curlen, int field_width, int *count, PRINTK_INFO *info)
{
    int i;

    for (i = curlen; i < field_width; i++)
    {
        printk_putc('0',count, info);
    }
}


static void printk_pad_space (int curlen, int field_width, int *count, PRINTK_INFO *info)
{
    int i;

    for (i = curlen; i < field_width; i++)
    {
        printk_putc(' ',count, info);
    }
}


int printk (PRINTK_INFO *info, const char *fmt, va_list ap)
{
    /* va_list ap; */
    char *p;
    int c;
    int firstBlankSpace = 0, subsBlankSpace = 0;
    char vstr[33];
    char *vstrp;
    int vlen;

    int done;
    int count = 0;

    int    flags_used;
    int    field_width;

    int    ival;
    int schar, dschar;
    int *ivalp;
    char *sval;
    int cval;
    unsigned int uval;

    /*
     * Start parsing apart the format string and display appropriate
     * formats and data.
     */
    for (p = (char *)fmt; (c = *p); p++)
    {
    /*
     * All formats begin with a '%' marker.  Special chars like
     * '\n' or '\t' are normally converted to the appropriate
     * character by the __compiler__.  Thus, no need for this
     * routine to account for the '\' character.
     */
    if (c != '%')
    {
        if (c != '\n')
        {
            /* remove multple blank spaces */
            if(firstBlankSpace && c == ' ')
            {
                subsBlankSpace = 1;
            }
            else if(c == ' ')
            {
                firstBlankSpace = 1;
            }
            else
            {
                firstBlankSpace = 0;
                subsBlankSpace = 0;
            }

            if(!subsBlankSpace)
            {
                printk_putc(c, &count, info);
            }
        }
        else
        {
            printk_putc(0x0D /* CR */, &count, info);
            printk_putc(0x0A /* LF */, &count, info);
        }

        /*
         * By using 'continue', the next iteration of the loop
         * is used, skipping the code that follows.
         */
        continue;
    }

    /* resetting the space flags. Since space is not coming after format specifier */
    firstBlankSpace = 0;
    subsBlankSpace = 0;

    /*
     * First check for specification modifier flags.
     */
    flags_used = 0;
    done = FALSE;
    while (!done)
    {
        switch (/* c = */ *++p)
        {
        case '-':
            flags_used |= FLAGS_MINUS;
            break;
        case '+':
            flags_used |= FLAGS_PLUS;
            break;
        case ' ':
            flags_used |= FLAGS_SPACE;
            break;
        case '0':
            flags_used |= FLAGS_ZERO;
            break;
        case '#':
            flags_used |= FLAGS_POUND;
            break;
        default:
            /* we've gone one char too far */
            --p;
            done = TRUE;
            break;
        }
    }

    /*
     * Next check for minimum field width.
     */
    field_width = 0;
    done = FALSE;
    while (!done)
    {
        switch (c = *++p)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            field_width = (field_width * 10) + (c - '0');
            break;
        default:
            /* we've gone one char too far */
            --p;
            done = TRUE;
            break;
        }
    }

    /*
     * Next check for the width and precision field separator.
     */
    if (/* (c = *++p) */ *++p == '.')
    {
        /* precision_used = TRUE; */

        /*
         * Must get precision field width, if present.
         */
        /* precision_width = 0; */
        done = FALSE;
        while (!done)
        {
        switch (/* c = uncomment if used below */ *++p)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':

            break;
            default:
            /* we've gone one char too far */
            --p;
            done = TRUE;
            break;
        }
        }
    }
    else
    {
        /* we've gone one char too far */
        --p;
    }

    /*
     * Check for the length modifier.
     */
    /* length_modifier = 0; */
    switch (/* c = */ *++p)
    {
        case 'h':
        /* length_modifier |= LENMOD_h; */
        break;
        case 'l':
        /* length_modifier |= LENMOD_l; */
        break;
        case 'L':
        /* length_modifier |= LENMOD_L; */
        break;
        default:
        /* we've gone one char too far */
        --p;
        break;
    }

    /*
     * Now we're ready to examine the format.
     */
    switch (c = *++p)
    {
        case 'd':
        case 'i':
        ival = (int)va_arg(ap, int);
        vlen = printk_mknumstr(vstr,&ival,TRUE,10);
        vstrp = &vstr[vlen];

        if (ival < 0)
        {
            schar = '-';
            ++vlen;
        }
        else
        {
            if (IS_FLAG_PLUS(flags_used))
            {
            schar = '+';
            ++vlen;
            }
            else
            {
            if (IS_FLAG_SPACE(flags_used))
            {
                schar = ' ';
                ++vlen;
            }
            else
            {
                schar = 0;
            }
            }
        }
        dschar = FALSE;

        /*
         * do the ZERO pad.
         */
        if (IS_FLAG_ZERO(flags_used))
        {
            if (schar)
            printk_putc(schar, &count, info);
            dschar = TRUE;

            printk_pad_zero (vlen, field_width, &count, info);
            vlen = field_width;
        }
        else
        {
            if (!IS_FLAG_MINUS(flags_used))
            {
            printk_pad_space (vlen, field_width, &count, info);

            if (schar)
                printk_putc(schar, &count, info);
            dschar = TRUE;
            }
        }

        /* the string was built in reverse order, now display in */
        /* correct order */
        if (!dschar && schar)
        {
            printk_putc(schar, &count, info);
        }
        goto cont_xd;

        case 'x':
        case 'X':
        uval = (unsigned int)va_arg(ap, unsigned int);
        vlen = printk_mknumstr(vstr,&uval,FALSE,16);
        vstrp = &vstr[vlen];

        dschar = FALSE;
        if (IS_FLAG_ZERO(flags_used))
        {
            if (IS_FLAG_POUND(flags_used))
            {
            printk_putc('0', &count, info);
            printk_putc('x', &count, info);
            /*vlen += 2;*/
            dschar = TRUE;
            }
            printk_pad_zero (vlen, field_width, &count, info);
            vlen = field_width;
        }
        else
        {
            if (!IS_FLAG_MINUS(flags_used))
            {
            if (IS_FLAG_POUND(flags_used))
            {
                vlen += 2;
            }
            printk_pad_space (vlen, field_width, &count, info);
            if (IS_FLAG_POUND(flags_used))
            {
                printk_putc('0', &count, info);
                printk_putc('x', &count, info);
                dschar = TRUE;
            }
            }
        }

        if ((IS_FLAG_POUND(flags_used)) && !dschar)
        {
            printk_putc('0', &count, info);
            printk_putc('x', &count, info);
            vlen += 2;
        }
        goto cont_xd;

        case 'o':
        uval = (unsigned int)va_arg(ap, unsigned int);
        vlen = printk_mknumstr(vstr,&uval,FALSE,8);
        goto cont_u;
        case 'b':
        uval = (unsigned int)va_arg(ap, unsigned int);
        vlen = printk_mknumstr(vstr,&uval,FALSE,2);
        goto cont_u;
        case 'p':
        uval = (unsigned int)va_arg(ap, void *);
        vlen = printk_mknumstr(vstr,&uval,FALSE,16);
        goto cont_u;
        case 'u':
        uval = (unsigned int)va_arg(ap, unsigned int);
        vlen = printk_mknumstr(vstr,&uval,FALSE,10);

        cont_u:
        vstrp = &vstr[vlen];

        if (IS_FLAG_ZERO(flags_used))
        {
            printk_pad_zero (vlen, field_width, &count, info);
            vlen = field_width;
        }
        else
        {
            if (!IS_FLAG_MINUS(flags_used))
            {
            printk_pad_space (vlen, field_width, &count, info);
            }
        }

        cont_xd:
        while (*vstrp)
            printk_putc(*vstrp--, &count, info);

        if (IS_FLAG_MINUS(flags_used))
        {
            printk_pad_space (vlen, field_width, &count, info);
        }
        break;

        case 'c':
        cval = (char)va_arg(ap, unsigned int);
        printk_putc(cval,&count, info);
        break;
        case 's':
        sval = (char *)va_arg(ap, char *);
        if (sval)
        {
            vlen = strlen(sval);
            if (!IS_FLAG_MINUS(flags_used))
            {
            printk_pad_space (vlen, field_width, &count, info);
            }
            while (*sval)
            printk_putc(*sval++,&count, info);
            if (IS_FLAG_MINUS(flags_used))
            {
            printk_pad_space (vlen, field_width, &count, info);
            }
        }
        break;
        case 'n':
        ivalp = (int *)va_arg(ap, int *);
        *ivalp = count;
        break;
        default:
        printk_putc(c,&count, info);
        break;
    }
    }
    return count;
}

void printf_init(void)
{
    uart_0_putchar(startChar);
}

void printf_end(void)
{
    uart_0_putchar(endChar);
}


/********************************************************************/
/**
 * Modified
 * The PrintInfo function has been modified for the vTerm interface
 * to transmit the start and end characters before and after
 * any string is sent
 * These characters serve as start and end markers for the communication
 * between board and pc
 */
int _printf(const char *fmt, ...)
{
    int rvalue = 0;
    va_list ap;
    PRINTK_INFO info;

    printf_init();
    info.dest = DEST_CONSOLE;
    info.func = uart_0_putchar;
    va_start(ap, fmt);
    rvalue = printk(&info, fmt, ap);
    va_end(ap);
    printf_end();

    return rvalue;
}

#else

int printk(PRINTK_INFO *info, const char *fmt, va_list ap)
{
    (void)info;
    (void)fmt;
    (void)ap;
    return 0;
}

void printf_init(void)
{
}

void printf_end(void)
{
}

int _printf(const char *fmt, ...)
{
    (void)fmt;
    return 0;
}

#endif /* UART_SUPPORT */
