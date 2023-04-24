#include "main.h"

/**
 * getlen - get length
 * @f: allocated char*
 * Return: ...
 */
int getlen(char *f)
{
unsigned int i = 0;

while (*(f + i))
{
i++;
}

return ((int)i);
}

/**
 * _strrev - reverse char*
 * @str: allocated char*
 * Return: ...
 */
void _strrev(char *str)
{
int start = 0;
int end = 0;

if (str == NULL)
{
return;
}
end = getlen(str) - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}

/**
 * _itoa - convert int to char*
 * @value: input
 * @str: output
 * @base: base format
 * Return: ...
 */
char *_itoa(int value, char *str, int base)
{
int is_negative = 0;
int i = 0;
int start = 0;
int end = i - 1;

if (base < 2 || base > 36)
{
return (NULL);
}
if (value < 0)
{
is_negative = 1;
value = -value;
}
do {
int digit = value % base;
str[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'A');
value /= base;
} while (value > 0);
if (is_negative)
{
str[i++] = '-';
}
str[i] = '\0';
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}

return (str);
}

/**
 * _putchar - flush a character in the stdout
 * @c: char*
 *
 * Return: ...
 */
int _putchar(char c)
{
return (write(1, &c, 1));

}

/**
 * _putstr - flush a str in the stdout
 * @c: char*
 *
 * Return: ...
 */

int _putstr(char *c)
{
int i = 0;

while (*(c + i))
{
_putchar(*(c + i));
i++;
}

return (sizeof(char) * getlen(c));
}
