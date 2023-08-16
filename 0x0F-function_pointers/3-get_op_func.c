#include "function_pointers.h"

/**
 * Description: get_op_func - selectst the correct func to perform the
 * operation asked by the user
 * Input:
 *	@s: [pointer to string] --> the type of operator
 * Return: a pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	if (s != 0)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
		int i = 6;

		while (i)
		{
			if (s == ops[i][0])
				return (ops[i][1](a, b));
			i++;
		}
	}
}
