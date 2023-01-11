#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *@dest: first string.
 *@src: second string.
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int a = 0, b = 0;

while (dest[a] != '\0')
{
a++;
}

while (b < n && src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}

dest[a] = '\0';

return (dest);
}
