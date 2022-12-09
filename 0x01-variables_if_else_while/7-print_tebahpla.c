#include <stdio.h>
/**
*main -entry
*Return: Always 0
*/
int main(void)
{char c;
for (c = 'a' ; c <= 'z' ; c++)
{revstr(c);
putchar(c);
}
putchar('\n');
return (0);
}
