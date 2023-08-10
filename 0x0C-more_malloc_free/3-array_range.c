#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: array_range - creates an array of integers consist of
 * all integers between min and max (min and max included)
 * Input:
 *	@min: [int] --> minimum number (first number)
 *	@max: [int] --> maximum number (last number)
 * Return: if success pointer to newly array otherwise NULL
 */

int *array_range(int min, int max)
{
	int *p, value, i = 0;

	if (min > max)
		return ('\0');

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return ('\0');

	for (value = min; value <= max; value++)
	{
		p[i++] = value;
	}

	return (p);
}
