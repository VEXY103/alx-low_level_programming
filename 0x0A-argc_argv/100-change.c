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

int convert(int a)
{
	int sum = 0;

	while (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
        {
            a -= 2;
        }

		else if (a % 25 == 0)
        {
            a -= 25;
        }

		else if (a % 10 == 0)
        {
            a -= 10;
        }

		else if (a % 5 == 0)
        {
            a -= 5;
        }

		else if (a % 2 == 0)
		{
			if (a % 10 == 6)
            {
                a -= 1;
            }

			else
            {
                a -= 2;
            }
		}
		else
        {
            a -= 1;
        }

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
    {
        printf("0\n");
    }

	else
	{
		cents = convert(a);

		printf("%d\n", cents);
	}

	return (0);
}
