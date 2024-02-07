#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers using the
 * jump search alogrithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in `array`
 * @value: the value to search for
 *
 * Return:
 *	- first index where `value` is located
 *	- -1 Null if value is not present in `array`
 */
int jump_search(int *array, size_t size, int value)
{
	size_t frst = 0, end = 0, jump;

	if (!array || !size)
		return (-1);

	jump = sqrt(size);
	/* jump until find an element bigger than value */
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += jump;
	}

	frst = end - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", frst, end);
	end = end >= size ? size - 1 : end;
	/* check last portion */
	while  (frst <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", frst, array[frst]);
		if (array[frst] == value)
			return ((int)frst);
		frst++;
	}

	return (-1);
}
