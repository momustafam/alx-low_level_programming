#include "main.h"

int _strlen(char *);

/**
 * Description: append_text_to_file - appends text at the end of a file
 * Input:
 *	@filename: (pointer to string): name of the file
 *	@text_content: (pointer to string): content what you want to append
 * Return:
 *	- 1 if success
 *	- -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (fp);

	if (text_content != NULL)
		write(fp, text_content, _strlen(text_content));

	close(fp);
	return (1);
}



/**
 * _strlen - calculate the lenght of a string.
 * @str: array of characters.
 *
 * Return: lenght of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
