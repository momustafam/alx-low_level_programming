#include "main.h"

/**
 * Description: puts_half - prints half of a string
 *
 * Input:
 *     @str: [char pointer] --> points to the first char
 *
 * Return: NULL
 */

void puts_half(char *str)
{
int i, len = 0, start;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 1)
start = len / 2 + 1;
else
start = len / 2;
for (i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
