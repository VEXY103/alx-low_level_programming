#include "main.h"

/**
 * more_numbers - prints from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	char a, b;
	int rep = 0;

	while (rep < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		rep++;
	}
}
