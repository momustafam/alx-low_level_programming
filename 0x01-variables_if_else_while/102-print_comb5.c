#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all possible combinations of four digits
 *
 * Return: 0 --> int (Always Success)
*/

int main(void)
{
   
int f = 0, s;

while (f <= 99)
{
s = f + 1;

while (s <= 99)
{
putchar((f / 10) + 48);
putchar((f % 10) + 48);
putchar(' ');
putchar((s / 10) + 48);
putchar((s % 10) + 48);

if (f == 99 && s == 98)
break;

putchar(',');
putchar(' ');

s++;
}
f++;
}
{
}
putchar('\n');
return (0);
}
