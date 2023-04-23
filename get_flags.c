#include "main.h"

/**
 * get_flags - Calculates flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flag
 */
int get_flag(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flag = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			 if (FLAGS_CH[j] == 0)
                                 break;
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
	}

	*i = curr_i - 1;

	return (flag);
}
