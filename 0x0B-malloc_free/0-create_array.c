#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * size - number.
 * @c - letter or sentence.
 * Return - NULL if size = 0,
 * A pointer to the array, or NULL if it fails,
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	c = (char*)malloc(size * sizeof(char));

	if (c == NULL) 
    {
		exit(0);
	}
	else {
		for (i = 0; i < size; ++i) 
        {
			_putchar(c[i]);
		}
	}

	return (0);
}