#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: alloc_grid - returns a pointer to a 2 dimensional array of int
 *
 * Input:
 *	@width: [int] --> number of rows
 *	@height: [int] --> number of columns
 *
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr_2d;

	if (width <= 0 || height <= 0)
		return ('\0');

	arr_2d = malloc(sizeof(int *) * height);

	if (arr_2d == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(sizeof(int *) * width);
		for (j = 0; j < width; j++)
		{
			arr_2d[i][j] = 0;
		}
	}
	return (arr_2d);
}
