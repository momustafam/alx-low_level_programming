#include "main.h"

/**
 * Description: create_file - function that creates a file
 * Input:
 *	@filename: (pointer to const char): name of the file
 *	@text_content: (pointer to char): points to the content of the file
 * Return:
 *	- 1 if success
 *	- -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';

	fp = open(filename, O_WRONLY);

	if (fp < 0)
		fp = open(filename, O_CREAT, 0600);

	fp = write(fp, text_content, sizeof(text_content));

	if (fp < 0)
		return (-1);
	return (1);
}
