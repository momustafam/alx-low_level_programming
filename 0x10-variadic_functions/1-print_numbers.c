#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * Descrtiption: print_numbers - prints numbers
 * Input:
 *	@separator: [pointer to const char] --> the string to be printed
 *	between numbers
 *	@n: [const unsigned int] --> number of arguments
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}

	printf("%d\n",  va_arg(list, int));
}
