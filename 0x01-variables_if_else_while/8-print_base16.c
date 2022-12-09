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
char c;
for (c = 'a' ; c <= 'z' ; c++)
{putchar(c);
}
putchar('\n');
return (0);
}
