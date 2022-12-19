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

while (t >= t / 2)
{
    _putchar(str[t]);
    t--;
}
_putchar('\n');
}