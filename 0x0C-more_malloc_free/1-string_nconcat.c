#include "main.h"
#include <stdlib>

/**
 * Description: string_nconcat - concatenates a str with n bytes of another str
 * Input:
 *	@s1: [char pointer] --> first string
 *	@s2: [char pointer] --> second string
 *	@n: [unsigned int] --> index of the first concatented char of s2
 * Return: if success a pointer to a newly allocated space
 * otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	p = malloc(len1 + n + 1);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}

	p[len1 + len2] = '\0';

	return (p);
}
