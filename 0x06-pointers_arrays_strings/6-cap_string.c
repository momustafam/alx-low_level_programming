#include "main.h"

/**
 * Description: cap_string - capitalizes all words of astring
 * Input:
 *	@str: [char pointer] --> points to a string
 * Return: pointer to the edited string
 */

char *cap_string(char *str)
{
	int i, j, len = 0;
	char s_words[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			'(', ')', '{', '}'};

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j < (int) sizeof(s_words); j++)
				{
					if (str[i - 1] == s_words[j])
					{
						str[i] -= 32;
						break;
					}
				}
			}
		}
	}
	return (str);
}
