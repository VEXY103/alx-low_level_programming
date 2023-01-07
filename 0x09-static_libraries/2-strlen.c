#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@s: A pointer to an int
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int t;

t = 0;
while (s[t] != '\0')
{
t++;
}
return (t);
}
