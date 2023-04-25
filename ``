#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH  -1

#define NULL_STRING "(NULL)"

#define PARAMS_INIT {0,0,0,0,0,0,0,0,0,0}

#define CONVERT_LOWERCASE  1
#define CONVERT_UNSIGNED   2

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @unsign: flag if unisgned value
 * @plus_flag: flag for the '+' character
 * @space_flag: flag for the ' ' character
 * @hashtag_flag: flag for the '#' character
 * @zero_flag:on if _flag specified
 * @minus_flag: if _dlag specified
 *
 * @width: field width specified
 * @precison: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */
typedef struct flags
{
 	unsigned int unsign           : 1;


	unsigned int plus_flag        : 1;
	unsigned int space_flag       : 1;
	unsigned int hashtag_flag     : 1;
	unsigned int zero_flag        : 1;
	unsigned int minus_flag       : 1;

	unsigned int wisth;
	unsigned int precision;

	unsigned int h_modifier       : 1;
	unsigned int l_modifier       : 1;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* convert_number print bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* specifier*/
int get_flag(char s, flags_t *f);
int get_modifier(char s, flags_t *f);
int get_width(char s, flags_t *f);
int get_print_func(char s, flags_t *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _print.c module */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* _put.c write_function */
int _putchar(char c);
int _puts(char *str);

/* simple_printers.c print custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
