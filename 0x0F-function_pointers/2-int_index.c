#include "function_pointers.h"

/**
 * Descritption: int_index - searches for an integer
 * Input:
 *	@array: [pointer to array of ints] --> container of elements
 *	@size: [int] --> number of elements of the array
 *	@cmp: [pointer to function] --> used to compare values
 * Return: the index of the first element for which the cmp function
 * doesn't return 0
 * -1 if no element matches or the size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
