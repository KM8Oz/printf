#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string
 *
 * Return: Number of characters printed 
 * (excluding the null byte used to end
 *         output to strings)
 */

int _printf(const char *format, ...)
{
    va_list args;
    int num_chars_printed = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            num_chars_printed++;
        }
        else
        {
            format++;

            switch (*format)
            {
            case 'c':
            {
                char c = (char)va_arg(args, int);
                write(1, &c, 1);
                num_chars_printed++;
                break;
            }
            case 's':
            {
                char *s = va_arg(args, char *);
                int len = 0;
                if (s == NULL)
                    s = "(null)";
                while (s[len])
                    len++;
                write(1, s, len);
                num_chars_printed += len;
                break;
            }
            case '%':
            {
                write(1, format, 1);
                num_chars_printed++;
                break;
            }
            default:
            {
                write(1, format - 1, 2);
                num_chars_printed += 2;
                break;
            }
            }
        }
        format++;
    }
    va_end(args);
    return (num_chars_printed);
}
