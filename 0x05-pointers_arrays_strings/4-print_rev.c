#include "main.h"

/**
 * Description: print_rev - prints a string in reverse
 *
 * Input:
 *     @s: [char pointer] --> points to the first character of the string
 *
 * Return: NULL
 */

void print_rev(char *s)
{
int i, len = 0;
while (1)
{
if (*s == '\0')
break;
len++;
s++;
}
s--;
for (i = 0; i < len; i++)
{
_putchar(*s);
s--;
}
_putchar('\n');
return;
}
