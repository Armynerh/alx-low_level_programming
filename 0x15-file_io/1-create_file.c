#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - create a file and add text in
 * @filename: name of the file
 * @text_content: content to add in the file
 * Return: 1 if success, -1 error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_return;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	write_return = write(fd, text_content, strlen(text_content));
	if (write_return == -1)
		return (-1);
	return (1);
}
