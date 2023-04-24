#include "main.h"
/**
 * _putnum - flush a number in the stdout
 * @c: int
 * Return: ...
 */
int _putnum(int c)
{
int i = 0;
char *str_num = (char *)malloc(INT16_MAX);

str_num = _itoa(c, str_num, 10);
_strrev(str_num);
while (*(str_num + i))
{
_putchar(*(str_num + i));
i++;
}
free(str_num);

return (sizeof(char) * getlen(str_num));
}
