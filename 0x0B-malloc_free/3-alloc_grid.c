#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * A pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **d2;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	d2 = malloc(sizeof(int *) * height);

	if (d2 == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		d2[h] = malloc(sizeof(int) * width);

		if (d2[h] == NULL)
		{
			for (; h >= 0; h--)
				free(d2[h]);

			free(d2);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			d2[h][w] = 0;
	}

	return (d2);
}
