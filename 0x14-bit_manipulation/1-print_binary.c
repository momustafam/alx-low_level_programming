#include "main.h"

void first_one(unsigned long int *, unsigned long int *);

/**
 * Decription: print_binary - prints the binary representation of a number
 * Input:
 *	@n: (unsigned long int): a number in base 10
 * Return: NULL
 */
void print_binary(unsigned long int n)
{
	unsigned long int len = 0, j = 0, i = 0;
	char *ans;

	if (n == 0)
	{
		printf("0");
		return;
	}

	first_one(&n, &i);
	len = i;
	ans = malloc(sizeof(char) * len);

	if (ans == NULL)
		return;

	for (j = 0; j < i; j++)
	{
		ans[j] = '0';
	}

	ans[0] = '1';

	while (n > 0)
	{
		first_one(&n, &i);
		ans[len - i] = '1';
	}
	printf("%s", ans);
}



/**
 * Description: first_one - returns index of first one in binary representation
 * of an integer
 * Input:
 *	@n: (unsigned long int): a number in base 10
 *	@i: (unsigned long int): index
 * Return: NULL
 */
void first_one(unsigned long int *n, unsigned long int *i)
{
	unsigned long int multi_two = 1;
	*i = 1;

	while (1)
	{
		if (multi_two == *n)
		{
			*n = 0;
			return;
		}
		else if (multi_two > *n)
		{
			*i -= 1;
			*n -= multi_two / 2;
			return;
		}

		multi_two *= 2;
		*i += 1;
	}
}

