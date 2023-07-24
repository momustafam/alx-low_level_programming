#include "main.h"

/**
 * Description: _puts - print a string followed by a new line to stdout
 *
 * Input:
 *     @str: [char pointer] --> points to the first character of the string
 *
 * Return: NULL
 */

void _puts(char *str)
{
while (1)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
str++;
}
}
