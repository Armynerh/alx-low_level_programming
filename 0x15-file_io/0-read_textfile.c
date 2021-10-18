#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read in a file and print to stdout
 * @filename: the content to print
 * @letters: number of chars to print
 * Return: 0 if error, else bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_r, print_read = 0, print_write = 0, ltters = letters;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd_r = open(filename, O_RDONLY);
	if (fd_r == -1)
		return (0);
	print_read = read(fd_r, buffer, letters);
	print_write = write(STDOUT_FILENO, buffer, print_read);
	close(fd_r);
	free(buffer);
	if (print_write == -1 || print_read == -1 || ltters < print_write)
		return (0);
	return (print_read);
}
