#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read a file and prints it to stdout
 * @filename: the file name
 * @letters: the max chars to print
 *
 * Description: a function that reads data nad prints
 * it to POSIX output
 *
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd, err;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd < 1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[rd] = '\0';

	err = write(STDOUT_FILENO, buf, rd);
	if (err < 0 || err != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);

	return (err);
}
