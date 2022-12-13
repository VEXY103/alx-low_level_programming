#include "main.h"
/**
 * print_sign - it prints the sign of a number.
 * @n: it's the number of which the sign will be printed.
 *
 * Return: + if greater than zero, 0 if zero, - if less than zero.
 */
int print_sign(int n)
{
if (n >= 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
