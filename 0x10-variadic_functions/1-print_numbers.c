#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number.
 * @separator: separate between two numbers.
 * Return: 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list num;

	va_start(num, n);

	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
