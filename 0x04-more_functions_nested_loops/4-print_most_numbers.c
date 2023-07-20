#include "main.h"

/**
 * Description: print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Input: Null
 *
 * Return: Null
 */

void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i);
}
}
_putchar('\n');
return;
}
