#include <stdio.h>
#include <unistd.h>
/**
*main -entry
*Return: Always 0
*/
int main(void)
{
int a;
for (a=0 ; a < 10 ; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
