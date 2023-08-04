#include "main.h"

/**
 * _isalpha - check if the character is alphabet or not
 * @c: the ascii code of the character
 *
 * Return: 1 if yes otherwise 0
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
