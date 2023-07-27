#include "main.h"

/**
 * Description: _strcat - append src string to dest string
 *
 * Input:
 *	@dest: [char pointer] --> points to the first char of dest string
 *	@src: [char pointer] --> points to the first char of src string
 *
 * Return:
 *	@dest: [char pointer] --> the dest string after appending src to it
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, lchar, i = 0;

	/* Figure out the length of dest string */
	while (dest[len] != '\0')
	{
		len++;
	}

	/* The index of the last character in dest string */
	lchar = len;

	/* Append the src string to dest */
	while (src[i] != '\0')
	{
		dest[lchar] = src[i];
		i++;
		lchar++;
	}

	dest[lchar] = '\0';

	return (dest);
}
