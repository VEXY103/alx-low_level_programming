#include <stdio.h>
/**
*main -entry
*Return: Always 0
*/
int main(void)
{int num;
char letter;
for (num = 0 ; num < 10 ; num++)
{
putchar(num % 10 + '0');
}
int c;
for (letter = 'a'; letter <= 'f'; letter++)
{putchar(letter);
}
putchar('\n');
return (0);
}
