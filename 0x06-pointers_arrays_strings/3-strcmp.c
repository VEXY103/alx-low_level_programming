#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes.
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
    int i;

    if (s1 [i] == s2 [i])
    {
        return (0);
    }
    else if (s1 [i] >= s2 [i])
    {
        return (1);
    }
    else
    {
        return (-1);
    }

}