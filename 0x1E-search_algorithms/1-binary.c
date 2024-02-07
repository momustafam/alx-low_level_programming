#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted of integers using
 * Binary Search Algorithm
 *
 * @array: a pointer to the first element of the array
 * @size: number of elements of `array`
 * @value: value to search for
 *
 * Return:
 *	- index where `value` is located
 *	- -1 if `value` is not present or `array` is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, start = 0, end = size - 1, mid = (end - start) / 2;

	if (!array || size == 0)
		return (-1);

	while (1)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (start == end)
			return (-1);
		else if (array[mid] > value)
		{
			end = mid - 1;
			mid = start + (end - start) / 2;
		}
		else
		{
			start = mid + 1;
			mid = start + (end - start) / 2;
		}

	}
}
