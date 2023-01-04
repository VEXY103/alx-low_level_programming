#include "main.h"

/**
 * divide - function that checks if i is divisible.
 * @i: The number to be checked.
 * @d: The divisor.
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */

int divide(int i, int d)
{
	if (i % d == 0)
    {
        return (0);
    }
		
	if (d == i / 2)
    {
        return (1);
    }

	return (divide(i, d + 1));
}

/**
 * is_prime_number - function that returns 1 if the input 
 * integer is a prime number, otherwise return 0.
 * @n: number.
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
    {
        return (0);
    }

	if (n >= 2 && n <= 3)
    {
        return (1);
    }

	return (devide(n, d));
}
