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
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (s + len);
		len++;
	}
	return ('\0');
}
