#include "main.h"

/**
 * Description: _strspn - gets the length of  a prefix substring
 * Input:
 *	@s: [char pointer] --> points to the intial string
 *	@accept: [char pointer] --> points to the repository of chars
 * Return: length of the maximum substring consist of accept chars
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int max_len = 0, s_len = 0, len = 0, ac_len;
	int found;

	while (s[s_len] != '\0')
	{
		found = 0;
		ac_len = 0;
		while (accept[ac_len] != '\0')
		{
			if (s[s_len] == accept[ac_len])
			{
				found = 1;
				len++;
				break;
			}
			ac_len++;
		}
		if (!found)
		{
			if (len > max_len)
				max_len = len;
			len = 0;
		}
		s_len++;
	}
	return (max_len);
}
