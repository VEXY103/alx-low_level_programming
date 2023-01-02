#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to the memory area.
 * @b: constant byte.
 * @n: bytes of the memory area pointed to by s.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}