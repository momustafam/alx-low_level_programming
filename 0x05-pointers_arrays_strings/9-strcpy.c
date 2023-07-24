#include "main.h"

/**
 * Description: _strcpy - copy a string into another location in the memory
 * Input:
 *     @dest: [char pointer] --> location of the first char for the copied str
 *     @src: [char pointer] --> location of the first char for the original str
 *
 * Return: the pointer to dest
 *     @dest: [char pionter]
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
do {
dest[i] = src[i];
i++;
} while (src[i - 1] != '\0');
return (dest);
}
