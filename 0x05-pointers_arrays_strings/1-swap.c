/**
 * swap_int - swaps the values of two integers
 *
 * Input:
 *     @a: the first integer
 *     @b: the second one
 *
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}
