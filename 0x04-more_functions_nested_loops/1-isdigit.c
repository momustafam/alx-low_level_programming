#include "main.h"

/**
 * Description: _isdigit - check if the character is a digit or not
 *
 * Input:
 *      @c: [int] --> the ascii code of the character that will be checked
 *
 * Return:
 *       1 --> if the character is digit
 *       0 --> otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
