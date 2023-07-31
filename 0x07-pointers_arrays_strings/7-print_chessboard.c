#include "main.h"

/**
 * Description: print_chessboard - prints the chessboard
 * Input:
 *	@a: [array pointer] --> points to an array of arrays with size 8 rows
 * Return: NULL
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
