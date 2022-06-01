#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the the posix standard output
 * @filename: pointer too the text in a file
 * @letters: number of letters its should read and print
 * Return: number of letters that could be read and printed, if it fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, amt;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	amt = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (amt);
}
