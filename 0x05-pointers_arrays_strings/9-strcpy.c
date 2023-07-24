#include "main.h"

/**
 * Description: _strcpy - cp the str pointed to by src to the buffer pointed by dest
 * Input:
 *     @dest: [char pointer] --> location of the first char for the copied str
 *     @src: [char pointer] --> location of the first char for the original str
 *
 * Return:
 *     dest: [char pionter]
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
