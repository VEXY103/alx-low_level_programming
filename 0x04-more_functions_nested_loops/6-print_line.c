#include "main.h"

/**
 * print_line - it prints a line using _
 * @n: is a variable
 *
 * Return: 0
 */

void print_line(int n)
{
int a = 0;

while (a < n && n > 0)
{
_putchar('_');
a++;
}
_putchar('\n');
}
