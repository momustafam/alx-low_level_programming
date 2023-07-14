#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all possible combinations of three digits
 *
 * Return: 0 --> int (Always Success)
*/

int main(void)
{

int i, j, k, l;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = i; k < 58; k++)
{
for (l = j + 1; l < 58; l++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i == 57 && j == 56 && k == 57 && l == 57)
break;
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
