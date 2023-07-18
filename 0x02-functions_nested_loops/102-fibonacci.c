#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
long int temp = 0, i = 0, prev = 1, current = 1;
while (i <= 48)
{
i++;
printf("%ld, ", current);
temp = prev;
prev = current;
current += temp;
}
printf("%ld\n", current);
return (0);
}
