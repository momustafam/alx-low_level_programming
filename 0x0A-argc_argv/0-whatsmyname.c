#include "main.h"

/**
 * Description: main - program prints its name
 * Input:
 *	@argc: [int] --> number of passed commands when you run it
 *	@argv: [char pointer to pointer] --> points to first str in the array
 * Return: 0 Always Success
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{	
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
