#include "main.h"
#include <stdio.h>
/**
 * Description: rev_string - reverses a string
 *
 * Input:
 *     @s: [char pointer] --> points to the first charater of the string
 *
 * Return: NULL
 */

void rev_string(char *s)
{
int len = 8, i;
char temp;
 printf("%d", 10 /2);
 for (i = 0; i <= len / 2; i++)
   {     
     temp = s[i];
     printf("%c-", temp);
     s[i] = s[len - i];
     printf("%c-", s[i]);
     s[len - i] = temp;
     printf("%c-", s[len - i]);
   }
return;
}
