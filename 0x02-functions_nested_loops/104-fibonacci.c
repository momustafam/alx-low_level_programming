#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long int temp, i = 1, prev = 1, current = 2;
while (i < 98)
{
printf("%lu, ", prev);
temp = prev;
prev = current;
current += temp;
i++;
}
printf("%lu\n", prev);
return (0);
}
