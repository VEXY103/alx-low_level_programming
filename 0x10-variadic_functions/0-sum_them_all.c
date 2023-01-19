#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number.
 * Return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int a;
	va_list num;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		s += va_arg(num, int);

	va_end(num);

	return (s);
}
