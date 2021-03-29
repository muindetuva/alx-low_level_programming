#include "holberton.h"

/**
  * create_file - Creates a file
  * @filename: Name of file to create
  * @text_content: String  to write to file
  *
  * Return: 1 on success -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t check;

	if (filename == NULL)
		return (-1);

	/*Find length of content*/
	while (text_content[len])
		len++;

	fd = open(filename, O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		check = write(fd, text_content, len);

	close(fd);
	if (check == -1)
		return (-1);

	return (1);
}
