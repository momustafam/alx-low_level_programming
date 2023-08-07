#include "main.h"
#include <stdlib.h>

/**
 * Description: create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * Input:
 *	@size: [unsigned int] --> number of elements in the array
 *	@c: [char] --> the specific char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return ('\0');

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size / sizeof(char); i++)
	{
		arr[i] = c;
	}
	return (arr);
}
