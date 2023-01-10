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
	char *concatenate;
	int i, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		b++;

	concatenate = malloc(sizeof(char) * b);

	if (concatenate == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenate[a++] = s1[i];

	for (i = 0; s2[i]; i++)
		concatenate[a++] = s2[i];

	return (concatenate);
}
