#include "main.h"

/**
 * _pow_recursion - function that returns the value of x 
 * raised to the power of y.
 * @x: number.
 * @y: power.
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	i *= _pow_recursion(x, y - 1);

	return (i);
}
