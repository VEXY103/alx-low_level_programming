#include "main.h"
/**
 * print_to_98 - it prints all natural numbers from input to 98.
 * @n: it's the number to begin counting at.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
_putchar("%d, ", n--);
_putchar("%d\n", n);
}
else
{
while (n < 98)
_putchar("%d, ", n++);
_putchar("%d\n", n);
}
}
