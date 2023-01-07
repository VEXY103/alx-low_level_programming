#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: if c is found, a pointer to the first occurence of c.
 * If c is not found, NULL.
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
