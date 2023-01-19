#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list.
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *separation = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separation, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separation, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separation, va_arg(l, double));
					break;
				case 's':
					string = va_arg(l, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separation, string);
					break;
				default:
					a++;
					continue;
			}
			separation = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(l);
}
