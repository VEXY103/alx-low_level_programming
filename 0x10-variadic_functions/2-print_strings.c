#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string.
 * @n: number.
 * Return: 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int a;
	va_list num;

	va_start(num, n);
	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		string = va_arg(num, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
