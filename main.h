#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int get_flag(char s, flags_t *f);

/* SIZES */
#define S_LONG 2
#define S_SHORT 1
int _printf(const char *format, ...);
int _putchar(char c);
int get_flag(const char *format, int *i);

#endif/* MAIN_H*/
