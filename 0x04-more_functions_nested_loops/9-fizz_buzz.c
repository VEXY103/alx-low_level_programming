#include <stdio.h>

/**
 * print_square - it prints a square'
 * size: is the size of the square
 * Return: void
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%n", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}

		n++;
	}
	putchar('\n');
	return (0);
}
