#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

int getlen(char *f);
void _strrev(char *str);
char *_itoa(int value, char *str, int base);
int _putchar(char c);
int _putstr(char *c);
int _putnum(int c);
int _printf(const char *format, ...);

#endif
