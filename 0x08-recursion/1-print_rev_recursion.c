#include "main.h"

/**
 * _print_rev_recursion - function that reverses a string.
 * @s: char to check.
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int a = 0;

	if(s[a] != '\0')
    {
        a++;
        return(*s);

        if(s[a] == '\0')
        {
            _print_rev_recursion(s-1);
        }
        
    }
}
