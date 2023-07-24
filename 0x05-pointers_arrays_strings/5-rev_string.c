#include "main.h"
/**
 * Description: rev_string - reverses a string
 *
 * Input:
 *     @s: [char pointer] --> points to the first charater of the string
 *
 * Return: NULL
 */

void rev_string(char *s)
{
int i, len = sizeof(s);
char temp;
for (i = 0; i < len / 2; i++)
{
if (i == len / 2 && len % 2 == 1)
return;
temp = s[i];
s[i] = s[len - i];
s[len - i] = temp;
}
return;
}
