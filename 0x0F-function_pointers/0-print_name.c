#include "function_pointers.h"

/**
 * Description: print_name - prints a name
 * Input:
 *	@name: [pointer to char] --> points to the name what you wanna print
 *	@f: [pointer to function] --> points to
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
