#include "main.h"

/**
 * Description: print_diagonal - print a left diagonal using "\" with length n
 *
 * Input:
 *     @n: [int] --> the length of the diagonal
 *
 * Return: Null
 */

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
