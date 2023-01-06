#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 * Return: 0
 */

int main(int argc, char *argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
