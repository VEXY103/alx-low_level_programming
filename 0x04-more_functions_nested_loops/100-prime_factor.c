#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long d = 2;
	long lp = 0;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;
			lp = d;
		}
		d += 1;
	}
	printf("%ld\n", lp);
	return (0);
}
