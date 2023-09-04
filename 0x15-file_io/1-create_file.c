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
	int fp_open, fp_write;

	if (filename == NULL)
		return (-1);

	fp_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fp_open < 0)
		return (-1);

	if (text_content != NULL)
	{
		fp_write = write(fp_open, text_content, sizeof(text_content));
		if (fp_write < 0)
			return (-1);
	}

	close(fp_open);
	return (1);
}
