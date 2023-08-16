#include "function_pionters.h"

/**
 * Description: array_iterator - executes a function given as a parameter
 * on each element of an array
 * Input:
 *	@array: [pointer to array of ints] --> parameters of the given func
 *	@size: [int] --> number of parameters
 *	@action: [pointer to function] --> given function
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
