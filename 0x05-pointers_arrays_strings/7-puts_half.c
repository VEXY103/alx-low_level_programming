#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: char to check
 *
 * Return: 0
 */

void puts_half(char *str)
{
int t;

t = 0;
while (str[t] != '\0')
{
t++;
}

if (t % 2 == 0)
{
for (t = t / 2; str[t]; t++)
{
_putchar(str[t]);
}
}
else
{
for (t = (t / 2) + 1; str[t]; t++)
{
_putchar(str[t]);
}
}
_putchar('\n');
}
