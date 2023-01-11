#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * convert - function that'll count the change.
 * @a: number.
 * Return: number of coins for the change.
 */

int convert(int i)
{
	int sum = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
			else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		sum++;
	}

	return (sum);
}


/**
 * main - basic function.
 * @argc: argument count.
 * @argv: array.
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int a, cents;

	cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");

	else
	{
		cents = convert(a);

		printf("%d\n", cents);
	}

	return (0);
}
