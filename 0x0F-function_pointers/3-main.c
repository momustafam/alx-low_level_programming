#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * Description: main - test our program
 * Input:
 *	@argc: [int] --> number of arguments
 *	@argv: [pointer to array] --> array of arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(argv[2][0]) == 0)
	{
		printf("Error\n");
		exit(99);
	}
	else if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		print("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2][0])(atoi(argv[1][0]), atoi(argv[3][0])));
	return (0);
}
