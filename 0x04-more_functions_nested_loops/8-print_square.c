#include "main.h"

/**
 * print_square - it prints a square'
 * size: is the size of the square
 * Return: void
 */

void print_square(int n)
{
int a = 0, b;

while (a < n && n > 0)
{
b = 0;
while (b < n)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
if (a == 0)
{
_putchar('\n');
}
}
