#include "main.h"

/**
 * Description: _strcpy - cp the str pointed to by src to the buffer pointed by dest
 * Input:
 *     @dest: [char pointer] --> location of the first char for the copied str
 *     @src: [char pointer] --> location of the first char for the original str
 *
 * Return:
 *     dest: [char pionter]
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
do
{
dest[i] = src[i];
i++;
} while (src[i - 1] != '\0');
return (dest);
}
