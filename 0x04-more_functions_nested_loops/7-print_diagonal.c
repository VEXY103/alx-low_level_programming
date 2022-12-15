#include "main.h"

/**
 * print_diagonal - it prints diagonal lines made of backslashes
 * @n: it's the number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
int b = 0, bb;
while (b < n && n > 0)
{
bb = 0;
while (bb < b)
{
_putchar(' ');
bb++;
}
_putchar('\\');
_putchar('\n');
b++;
}
if (b == 0)
{
_putchar('\n');
}
}
