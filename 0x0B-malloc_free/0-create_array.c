#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: number.
 * @c: letter or sentence.
 * Return: NULL if size = 0,
 * A pointer to the array, or NULL if it fails,
*/

char *create_array(unsigned int size, char c)
{
	char *sentence;
	unsigned int i;

	if (size == 0)
		return (NULL);

	sentence = malloc(sizeof(char) * size);

	if (sentence == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sentence[i] = c;

	return (sentence);
}
