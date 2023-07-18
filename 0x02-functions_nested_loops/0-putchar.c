#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: print _putchar string using _putchar func
 *
 * Return: 0 Always Success
*/

int main(void)
{
char *str = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
