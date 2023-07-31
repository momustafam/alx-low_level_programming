#include "main.h"
0;10;1c
/**
 * Descritption: _memset - fills n chars of a string with a constant byte
 * Input:
 *	@n: [unsigned int] --> number of bytes
 *	@b: [char] --> constant byte
 *	@s: [char pointer] --> points to a string
 * Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
