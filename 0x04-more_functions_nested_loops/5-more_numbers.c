#include "main.h"

/**
 * more_numbers : prints 10 times the numbers, from 0 to 14.
 *
 * Return: 0 
 */

void more_numbers(void)
{
int c, n;
n = 0;
while (n < 10)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10 && c <= 14)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
n++;
}
}
