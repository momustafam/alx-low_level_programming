#include "main.h"

/**
 *  times_table - prints the time table of 0 to 9
 *  @n: starter
*/

void print_times_table(int n)
{
int num, mult, prod;
if (n > 15 || n < 0)
return;
for (num = 0; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 9)
_putchar(' ');
_putchar(' ');
else if (prod < 100)
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
_putchar(' ');
else
_putchar(prod / 100 + 48)
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
} 
_putchar('\n');
}
return;
}
