#include "main.h"
0;10;1c
/**
 * Description: set_string - sets the value of a pointer to a char
 * Input:
 *	@s: [pointer to pointer] --> pionts to a pointer that points to a str
 *	@to: [char pointer] --> points to a str
 * Return: NULL
 */

void set_string(char **s, char *to)
{
	*s = to;
}
