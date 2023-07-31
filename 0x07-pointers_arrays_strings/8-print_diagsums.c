#include "main.h"
#include <stdio.h>

/**
 * Description: print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * Input:
 *	@a: [array pointer] --> the array what you will print its diagsum
 *	@size: [int] --> size of the array
 * Return: NULL
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += (a + i * size)[i];
		sum2 += (a + i * size)[size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
