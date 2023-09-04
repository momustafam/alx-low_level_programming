#include "main.h"
#define BUF_SIZE 1024

void cp(char *, char *);

/**
 * Description: main - main function
 * Input:
 *	@argc: (int): number of arguments
 *	@argv: (pointer to array of strings): array of arguments
 * Return: always 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (1);
}


/**
 * Description: cp - copies content of a file to another file
 * Input:
 *	@src: (pointer to string): name of the source file
 *	@dest: (opinter to string): name of the destenation file
 * Return: NULL
 */
void cp(char *src, char *dest)
{
	char *buff[BUF_SIZE];
	int srcp, src_open, destp, dest_open;

	src_open = open(src, O_RDONLY);
	srcp = read(src_open, buff, BUF_SIZE);
	if (srcp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(src_open) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_open);
		exit(100);
	}

	dest_open = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	destp = write(dest_open, buff, BUF_SIZE);
	if (destp == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	if (close(dest_open) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest_open);
		exit(100);
	}
}
