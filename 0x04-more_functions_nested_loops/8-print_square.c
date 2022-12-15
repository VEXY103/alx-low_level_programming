#include "main.h"

/**
 * print_square - it prints a square
 * size: size of the square
 * Return: void
 */

void print_square(int size)
{
int a = 0, b;

while (a < size && size > 0)
{
b = 0;
while (b < size)
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
