#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

/* getlen */
int getlen(char *f);

/* _strrev */
void _strrev(char *str);

/* _itoa */
char *_itoa(int value, char *str, int base);

/* _putchar */
int _putchar(char c);

/* _putstr */
int _putstr(char *c);

/* _putnum */
int _putnum(int c);

/* _printf */
int _printf(const char *format, ...);

#endif
