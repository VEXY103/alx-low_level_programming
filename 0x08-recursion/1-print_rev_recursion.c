#include "main.h"

/**
 * _print_rev_recursion - function that reverses a string.
 * @s: char to check.
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	if(a != 0)
    {
        _print_rev_recursion(s);
        a--;
    }
}
