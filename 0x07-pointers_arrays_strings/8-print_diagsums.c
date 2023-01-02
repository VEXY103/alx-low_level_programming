#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two.
 * diagonals of a square matrix of integers.
 * @a: pointer.
 * @size: size of the matrix.
 * Return: none.
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
		{
			c += *(a + b);
		}

		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
		{
			d += *(a + b);
		}
	}

	printf("%d, %d\n", c, d);
}
