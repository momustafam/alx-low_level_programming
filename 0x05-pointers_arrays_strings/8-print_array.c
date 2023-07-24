#include "main.h"
#include <stdio.h>

/**
 * Description: print_array - prints n elements of an array of integers
 *
 * Input:
 *     @a: [int pointer] --> address of the first element in the array
 *     @n: [int] --> number of elements in the array
 *
 * Return: NULL
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n-1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n]);
return;
}
