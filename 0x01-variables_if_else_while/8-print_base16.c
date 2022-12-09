#include <stdio.h>
/**
*main -entry
*Return: Always 0
*/
int main(void)
{
char a;
for (a = 0 ; a < 10 ; a++)
{
putchar(a + '0');
}
int c;
for (c = 'a' ; c <= 'f' ; c++)
{putchar(c);
}
putchar('\n');
return (0);
}
