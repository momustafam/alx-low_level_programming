#include "main.h"

/**
 * Description: _memcpy - copy n chars from a string to another one
 * Input:
 *	@dest: [char pointer] --> destination string
 *	@src: [char pointer] --> source string
 *	@n: [unsigned int] --> number of copied chars
 * Return: pointer points to the destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
