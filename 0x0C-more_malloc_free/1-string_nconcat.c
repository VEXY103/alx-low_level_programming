#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @n: number of bytes of s2 to be printed.
 * Return: Null the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	int i, j = 0, k, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
    {
        b++;
    }

    k = n;
    for (j < k; s2[j]; j++)
    {
        k--;
    }

	concatenate = malloc(sizeof(char) * (b + j));

	if (concatenate == NULL)
		return (NULL);

	j = 0;
    for (i = 0; s1[i]; i++)
		concatenate[a++] = s1[i];

	for (j < n; s2[j]; j++)
		concatenate[a++] = s2[j];

	return (concatenate);
}
