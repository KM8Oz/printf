#include "main.h"
/**
 * _switchto - Prints an argument based on its type
 * @format: Formatted string in which to print the arguments
 * @list: List of arguments to be printed
 * @ind: ind
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags.
 * @width: get width
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: 1 or 2
 */
int _switchto(const char *format, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	format_type allformats[] = {
		{'c', print_char}, {'s', f_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', f_unsigned}, {'o', f_octal}, {'x', f_hexadecimal},
		{'X', f_hexa_upper}, {'p', f_pointer}, {'S', f_non_printable},
		{'r', f_reverse}, {'R', f_rot13string}, {'\0', NULL}
	};
	for (i = 0; allformats[i].format != '\0'; i++)
		if (format[*ind] == allformats[i].format)
			return (allformats[i].fn(list, buffer, flags, width, precision, size));
	printf("%c", format[*ind]);
	if (allformats[i].format == '\0')
	{
		if (format[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (format[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (format[*ind] != ' ' && format[*ind] != '%')
				--(*ind);
			if (format[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &format[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
