#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf -  a printf clone function
 * @format: function args listed
 */

int _printf(const char *format, ...)
{
    int i;
    int printed_chars = 0;
    char ch;
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            _putchar(*format);
            printed_chars++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

            switch (*format)
            {
            case 'c':
                ch = va_arg(args, int);
                _putchar(ch);
                printed_chars++;
                break;
            case 'd':
                ch = va_arg(args, int);
                _putchar(ch);
                printed_chars++;
                break;
            case 'p':
                ch = va_arg(args, int);
                _putchar(ch);
                printed_chars++;
                break;
            case 'i':
                ch = va_arg(args, int);
                _putchar(ch);
                printed_chars++;
                break;
            case 's':
            {
                char *str = va_arg(args, char *);
                for (i=0; str[i] != '\0'; i++)
                {
                    _putchar(str[i]);
                    printed_chars++;
                }
            }
            break;
            case '%':
                _putchar('%');
                printed_chars++;
                break;
            default:
                _putchar('%');
                _putchar(*format);
                printed_chars += 2;
                break;
            }
        }
        format++;
    }

    va_end(args);
    return printed_chars;
}
