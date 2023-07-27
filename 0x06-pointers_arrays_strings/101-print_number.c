#include "main.h"

/**
 * Description: print_number - print a number
 * Input:
 *	@n: [int] --> the number
 * Return: NULL
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
