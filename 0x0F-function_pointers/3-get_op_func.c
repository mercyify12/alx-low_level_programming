#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - program that selects the correct function to perform
 *               user asked operation.
 * @s: The operator passed as argument.
 * Return: pointer of the function which serve as parameter to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;

	return (ops[k].f);
}
