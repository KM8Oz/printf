#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int positiveInt = 42;
    int negativeInt = -123;
    int zero = 0;
    int largePositiveInt = 987654321;
    int largeNegativeInt = -987654321;
    int leadingZeros = 00123;
    int spaceBeforeValue = 42;
    int plusSignBeforePositive = 42;
    int plusSignBeforeNegative = -123;
    int widthSpecifier = 42;
    int zeroPaddingSpecifier = 42;
    int leftJustificationSpecifier = 42;
    int precisionSpecifier = 42;
    int combinationOfSpecifiers = 42;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    // _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");

    // Printing test cases using printf
    printf("Positive integer: %d\n", positiveInt);
    _printf("Positive integer: %d\n", positiveInt);
    printf("Negative integer: %d\n", negativeInt);
    _printf("Negative integer: %d\n", negativeInt);
    printf("Zero: %d\n", zero);
    _printf("Zero: %d\n", zero);
    printf("Large positive integer: %d\n", largePositiveInt);
    _printf("Large positive integer: %d\n", largePositiveInt);
    printf("Large negative integer: %d\n", largeNegativeInt);
    _printf("Large negative integer: %d\n", largeNegativeInt);
    printf("Integer with leading zeros: %d\n", leadingZeros);
    _printf("Integer with leading zeros: %d\n", leadingZeros);
    printf("Integer with a space before the value: % d\n", spaceBeforeValue);
    _printf("Integer with a space before the value: % d\n", spaceBeforeValue);
    printf("Integer with a plus sign before positive values: %+d\n", plusSignBeforePositive);
    _printf("Integer with a plus sign before positive values: %+d\n", plusSignBeforePositive);
    printf("Integer with a plus sign before negative values: %+d\n", plusSignBeforeNegative);
    _printf("Integer with a plus sign before negative values: %+d\n", plusSignBeforeNegative);
    printf("Integer with a zero-padding specifier: %05d\n", zeroPaddingSpecifier);
    _printf("Integer with a width specifier: %5d\n", widthSpecifier);
    printf("Integer with a left-justification specifier: %-5d\n", leftJustificationSpecifier);
    _printf("Integer with a left-justification specifier: %-5d\n", leftJustificationSpecifier);
    printf("Integer with a precision specifier: %.2d\n", precisionSpecifier);
    _printf("Integer with a precision specifier: %.2d\n", precisionSpecifier);
    printf("Integer with a combination of specifiers: %+05.2d\n", combinationOfSpecifiers);
    _printf("Integer with a combination of specifiers: %+05.2d\n", combinationOfSpecifiers);

    return (0);
}
