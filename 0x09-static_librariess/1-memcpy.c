#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area to another.
 * @src: from memory area.
 * @dest: to memory area.
 * @n: bytes from memory area src.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
	{
		dest[a] = src[a];
	}

	return (dest);
}
