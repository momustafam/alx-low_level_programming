#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
