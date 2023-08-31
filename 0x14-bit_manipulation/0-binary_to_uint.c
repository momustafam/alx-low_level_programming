#include "main.h"

int _strlen(const char *);

/**
 * Description: binary_to_uint - converts a binary number to an unsigned int
 * Input:
 *	@b: (pointer to const string): given binary number in string format
 * Return:
 *	unsigned integer(converted number) if succeed
 *	0 if b includes chars that are not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, pow = 1;
	int len;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	while (1)
	{
		if (len < 0)
			break;
		if (b[len] == '1')
			ans += pow;
		else if (b[len] != '0')
			return (0);
		pow *= 2;
		len--;
	}
	return (ans);
}



/**
 * Description: _strlen - returns the length of a string
 * Input:
 *	@str: (string): the string what you want to know its length
 * Return: the length of given string
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}
