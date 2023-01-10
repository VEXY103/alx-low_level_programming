#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory.
 * @str: string.
 * Return: NULL if str = NUL or insufficient memory was available,
 * On success, a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
char *copy;
int i, a = 0;
if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
a++;
}

copy = malloc(sizeof(char) * (a + 1));
if (copy == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
copy[i] = str[i];
}

copy[a] = '\0';

return (copy);
}
