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
    char *ptr1;
    char *ptr2;
    int a = 0, b = 0, i, j;

    if (ptr1 == NULL)
    {
        return (NULL);
    }

    for (i = 0; ptr1[i]; i++)
    {
        a++;
    }

    ptr1 = malloc(sizeof(char) * a);

    for (j = 0; ptr1[j]; j++)
    {
        b++;
    }

    ptr2 = malloc(sizeof(char) * b);
    
    i = 0;
    j = 0;
    while (*ptr1)
    {
        _putchar (ptr1[i]);
        i++;
    }
    _putchar(' ');
    while (*ptr2)
    {
        _putchar (ptr2[j]);
        j++;
    }
    return (0);
}