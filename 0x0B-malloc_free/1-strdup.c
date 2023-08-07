#include "main.h"
#include <stdlib.h>

/**
 * Description: _strdup - copy a string to a new memory location
 *
 * Input:
 *	@str: [char pointer] --> points to the string what you want to copy
 *
 * Return: pointer to first byte of the new location
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *new_loc;


	while (str[len] != '\0')
	{
		len++;
	}

	new_loc = malloc(sizeof(char) * len + 1);

	for (i = 0; i < len; i++)
	{
		new_loc[i] = str[i];
	}

	new_loc[len] = '\0';

	return (new_loc);
}
