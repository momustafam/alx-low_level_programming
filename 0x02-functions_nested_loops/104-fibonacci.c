#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long int temp, i = 2, prev = 1, current = 1;
while (i <= 98)
{
i++;
printf("%lu, ", current);
temp = prev;
prev = current;
current += temp;
}
printf("%lu\n", current);
return (0);
}
