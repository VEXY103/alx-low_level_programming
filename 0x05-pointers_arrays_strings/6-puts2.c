#include "main.h"
/**
 * puts2 - function that prints every other character of a string.
 *
 * @str: char to check
 *
 * Return: 0
 */
void puts2(char *str)
{
    int c;

	for (c = 0; str[c] != '\0'; c++)
	if (c % 2 == 0)
		_putchar(str[c]);
	_putchar('\n');
}
