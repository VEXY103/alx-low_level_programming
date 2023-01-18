#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function 
 * to perform the operation asked by the user.
 * @s: operator.
 * Return: pointer.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t o[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (o[a].op != NULL && *(o[a].op) != *s)
		a++;

	return (o[a].f);
}
