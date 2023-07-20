#include "main.h"

/**
 * Description: print_square - print a line of "#" with length n
 *
 * Input:
 *     @size: [int] --> the length of the line
 *
 * Return: Null
 */

void print_square(int size)
{
int i, n;
for (n = 0; n < size; n++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
return;
}
