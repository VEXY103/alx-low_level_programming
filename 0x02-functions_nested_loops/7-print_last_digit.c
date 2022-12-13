#include "main.h"

/**
 * print_last_digit - it prints the last digit of a number.
 * @n: it's the number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
{
ld *= -1;
}
_putchar(ld + '0');
return (ld);
}
