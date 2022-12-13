#include "main.h"
/**
 *main - start point
 *desciption - we're printing letters
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char l;
	for (l = 'a' ; l <= 'z' ; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
