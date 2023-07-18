#include <main.h>

/**
 * Description: main - entry point will print _putchar using _putchar function
 *
 * Input: NULL
 *
 * Return: NULL
*/

int main(void)
{
char[] str = "_putchar";
int i;
for (int i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
