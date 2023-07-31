#include "main.h"

/**
 * Description: _strchr - find the first occurrence of a char
 * Input:
 *	@s: [char pointer] --> a string for searching
 *	@c: [char] --> a char what you are looking for
 * Return: pointer to the first occurrence of the char c
 *	NULL if the char is not found
 */

char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
