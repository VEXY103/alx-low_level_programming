#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string 1.
 * @accept: string 1.
 * Return: a pointer to the byte in 1 that = one of the bytes in accept 2,
 * NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return (0);
}
