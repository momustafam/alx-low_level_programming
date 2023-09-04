#include "main.h"

/**
 * Description: read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * Input:
 *	@filename: (pointer to const char): pointer to a file
 *	@letters: (size_t): number of characters it should read and print
 * Return:
 *	-the actual number of characters it could read and print
 *	- 0 if the file can not be opened or read, the filename is NULL, or
 *	write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, sz;
	char *buffer = calloc(letters + 1, sizeof(char));

	fp = open(filename, O_RDONLY);
	
	if (fp == -1)
		return (0);

	sz = read(fp, buffer, letters);

	if (sz < 0)
	{
		close(fp);
		return (0);
	}

	printf("%s", buffer);
	close(fp);
	return (sz);
}
