#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all digits from 0 to 9
 *
 * Return: 0 --> int (Always Success)
*/

int main(void)
{

int i;

for (i = 48; i < 58; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
