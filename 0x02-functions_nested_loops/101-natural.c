#include <stdio.h>

/**
 * main - print the natural numbers below 1024 that multiples of 3 or 5
 *
 * Return: Null
 */

int main(void)
{
int sum = 0, i;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
