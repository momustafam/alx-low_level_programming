#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Null
 */

int main(void)
{
int temp, prev = 1, current = 1;
long int sum = 0;
while (current <= 4000000)
{
temp = prev;
prev = current;
current += temp;
if (current % 2 == 0)
sum += current;
}
printf("%ld\n", sum);
}
