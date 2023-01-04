#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: pointer to the memory area.
 * Return: s
 */

void _puts_recursion(char *s)
{
    int a;

    if(s[a] == '\0')
    {
        _putchar('\n');
    }

    _puts_recursion(char *s[a]);
    a++;
}