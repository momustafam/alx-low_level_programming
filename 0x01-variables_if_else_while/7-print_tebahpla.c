#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all alphabets in lowercase
 *
 * Return: 0 --> int (Always Success)
*/

int main(void)
{
int i;

for (i = 122; i > 96; i--)
{
putchar(i);
}

putchar('\n');

return (0);
}
