#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: return 1 if the file exist, -1 if the file does not exist
 * or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(fd, 0_WRONLY | 0_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		rwr = write(fd, text_content, num_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
