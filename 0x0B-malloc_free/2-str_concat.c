#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: NULL if str = NUL or insufficient memory was available,
 * On success, a pointer to the duplicated string.
 */

char *str_concat(char *s1, char *s2)
{
    int a = 0, b = 0, i, j = 0;

    if (s1 == NULL)
    {
        return (NULL);
    }

    for (i = 0; s1[i]; i++)
    {
        a++;
    }

    s1 = malloc(sizeof(char) * a);

    s1[i + 1] = s2[j];

    for (j = 0; s2[j]; j++)
    {
        b++;
    }

    s2 = malloc(sizeof(char) * b);
    
    i = 0;
    j = 0;
    while (*s1)
    {
        _putchar (s1[i]);
        i++;
    }
    
    while (*s2)
    {
        _putchar (s2[j]);
        j++;
    }
    return (0);
}