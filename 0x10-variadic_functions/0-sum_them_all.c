#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * Description: sum_them_all - returns the sum of all its parameters
 * Input:
 *	@n: [const unsigned int] --> number of arguments
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
