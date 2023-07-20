#include "main.h"

/**
 * Description: more_numbers - print digits from 0 to 14 (10 times)
 *
 * Input: Null
 *
 * Return: Null
 */

void more_numbers(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 2; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (k == '5' && j == 1)
break;
if (j == 1)
{
_putchar(j + '0');
}
_putchar(k);
}
}
_putchar('\n');
}
}
