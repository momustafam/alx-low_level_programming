#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * Description: print_strings - prints strings
 * Input:
 *	@separator: [pointer to const string] --> the string to be printed
 *	between the strings
 *	@n: [const unsigned int] --> number of arguments
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	if (n == 0)
		return;

	for (i = 0; i < n - 1; i++)
	{
		char *s;
		s = va_arg(list, char*);

		if (s == NULL)
			s = "(nil)";

		printf("%s%s", s, separator);
	}

	printf("%s\n", va_arg(list, char*));

	va_end(list);
}
