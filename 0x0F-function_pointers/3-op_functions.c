#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * Return: The sum of a and b.
 * op_sub - Returns the difference of two numbers.
 * Return: The difference of a and b.
 * op_mul - Returns the product of two numbers.
 * Return: The product of a and b.
 * op_div - Returns the division of two numbers.
 * Return: The quotient of a and b.
 * op_mod - Returns the remainder of the division of two numbers.
 * Return: The remainder of the division of a by b.
 * @a: The first number.
 * @b: The second number.
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
