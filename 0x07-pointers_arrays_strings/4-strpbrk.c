#include "main.h"

/**
 * Description: _strpbrk - locates the first occurrence in the string s
 *				of any of the bytes in the string accept
 * Input:
 *	@s: [char pointer] --> points to the intial string
 *	@accept: [char pointer] --> reference bytes container
 * Return: pointer to the first byte in s that matches one of chars in accept
 *	Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int ac_len, s_len = 0;

	while (s[s_len] != '\0')
	{
		ac_len = 0;
		while (accept[ac_len] != '\0')
		{
			if (s[s_len] == accept[ac_len])
				return (s + s_len);
			ac_len++;
		}
		s_len++;
	}
	return ('\0');
}
