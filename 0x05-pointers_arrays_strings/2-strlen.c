#include "main.h"

/**
 * Description: _strlen - return the length of a string
 *
 * Input:
 *     @s: [char pointer] --> points to the first character in the string
 *
 * Return:
 *     len [int] --> the length of the string
 */

int _strlen(char *s)
{
int len = 0;
while (1)
{
if (*s == '\0')
return (len);
len++;
s += 1;
}
}
