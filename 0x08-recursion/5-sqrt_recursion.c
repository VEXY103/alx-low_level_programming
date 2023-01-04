#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int square(int i, int r)
{
	if ((r * r) == i)
		return (r);

	if (r == i / 2)
		return (-1);

	return (square(i, r + 1));
}


int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (square(n, r));
}