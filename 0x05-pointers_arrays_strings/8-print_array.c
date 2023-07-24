#include "main.h"
#include <stdio.h>

/**
 * Description: print_array - prints n elements of an array of integers
 *
 * Input:
 *     @a: [int pointer] --> address of the first element in the array
 *     @n: [int] --> number of elements of the array to be printed
 *
 * Return: NULL
 */

void print_array(int *a, int n)
{
int i;
if (n < 1)
return;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
return;
}
