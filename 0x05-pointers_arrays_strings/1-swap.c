#include "main.h"

/**
*  reset_to_98 - it takes the pointer and updates the value to 98
*  @n: int to check
*  Return: 0
*/

void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}