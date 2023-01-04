#include "main.h"

/**
 * square - function that finds the natural square root of an inputted number.
 * @i: number.
 * @r: root.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */

int square(int i, int r)
{
	if ((r * r) == i)
	{
		return (r);
	}

	if (r == i / 2)
	{
		return (-1);
	}

	return (square(i, r + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number.
 * Return: If n has a natural square root - the natural square root of n.
 * If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (square(n, r));
}
