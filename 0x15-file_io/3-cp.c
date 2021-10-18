#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * copy_file - copy content to another file
 * @fd_from: file descriptor of file from
 * @fd_to: file descriptor of file to
 * Return: 0 or NULL
 */
int copy_file(int fd_from, int fd_to)
{
	int read_from = 0, wrt_to = 0;
	char buffer[1024];

	while ((read_from = read(fd_from, buffer, 1024)) > 0)
	{
		if (read_from == -1)
			return (98);
		if (read_from > 0)
		{
			wrt_to = write(fd_to, buffer, read_from);
			if (wrt_to == -1)
				return (99);
		}
	}
	if (read_from == -1)
		return (98);
	if (wrt_to == -1)
		return (99);
	return (1);
}

/**
 * main - entry, copy content file to another
 * @ac: number of arguments
 * @av: argument
 * Return: exit or 0
 */
int main(int ac, char *av[])
{
	int fd_file_from = 0, fd_file_to = 0, r_file = 0;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_file_from = open(av[1], O_RDONLY);
	fd_file_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	r_file = copy_file(fd_file_from, fd_file_to);
	if (r_file == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (r_file == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd_file_from) == -1 || close(fd_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	return (0);
}
