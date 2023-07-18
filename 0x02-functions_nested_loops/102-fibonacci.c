#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

void fibonacci(void);

int main(void)
{
fibonacci();
return (0);
}

void fibonacci(void)
{
long long temp, i = 0, prev = 0, current = 1;
while (i <= 50)
{
i++;
printf("%lld, ", current);
temp = prev;
prev = current;
current += temp;
}
printf("%lld\n", current);
}
