#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
        while (src != n)
        {
            dest[a] = src[b];
		    a++;
		    b++;
        }
		
	}

	dest[a] = '\0';

	return (dest);
}
