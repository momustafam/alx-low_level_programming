#include "main.h"

/**
 * print_sign - tell us if the number is pos, neg or zero
 * @n: the number
 *
 * Return:
 *     1 if the number is pos
 *     0 if the number is zero
 *     -1 if the number is neg
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
