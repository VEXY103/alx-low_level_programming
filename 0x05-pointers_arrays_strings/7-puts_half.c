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

for (t = (t / 2); str[t]; t++)
{
    if (t % 2 == 0)
    {
        _putchar(str[t]);
    }
    else
    {
        _putchar(str[t - 1]);
    }
}
_putchar('\n');
}