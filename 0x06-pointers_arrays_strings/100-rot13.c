#include "main.h"

/**
 * Description: rot13 - encrypt string using rot 13 algorithm
 * Input:
 *	@str: [char pointer] --> a string
 * Return: pointer to the encrypted string
 */

char *rot13(char *str)
{
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabets[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, len = 0;

	while (str[len] != '\0')
	{
		for (i = 0; i < (int) sizeof(alphabets); i++)
		{
			if (str[len] == alphabets[i])
			{
				str[len] = rot13_alphabets[i];
				break;
			}
		}
		len++;
	}
	return (str);
}
