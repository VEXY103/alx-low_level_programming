#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
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
