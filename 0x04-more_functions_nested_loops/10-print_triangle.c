#include "main.h"

/**
 * Description: print_triangle - draw a triangle using "#" with n rows
 *
 * Input:
 *     @size: [int] --> the number of rows and "#"
 *
 * Return: Null
 */


void print_triangle(int size)
{
int i, j, temp;
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
temp = i;
while (temp > 0)
{
temp--;
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
return;
}
