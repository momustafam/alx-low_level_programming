#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void --> nothing to return
*/

void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar((char) i);
}
_putchar('\n');
return;
}
