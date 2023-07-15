#include "main.h"
#define BUFFER_SIZE 1024

static void copy_writer(char *file, int fd, char *buf, int len);
static size_t file_reader(char *file, char **buf, int fd);

/**
 * main - program to copy one file to another
 * @argc: the number of arguments passed
 * @argv: the string
 *
 * Description: a program that copies the contents of a file
 * to another file
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int descriptor0, descriptor1, len, error;
	char *buf, *file_from, *file_to;

	buf = NULL;
	len = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	descriptor0 = open(file_from, O_RDONLY);
	descriptor1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (len > 0)
	{
		len = file_reader(file_from, &buf, descriptor0);
		if (!len)
			break;
		copy_writer(file_to, descriptor1, buf, len);
	}
	free(buf);
	error = close(descriptor0);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", descriptor0);
		exit(100);
	}
	error = close(descriptor1);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", descriptor1);
		exit(100);
	}
	return (0);
}

static size_t file_reader(char *file, char **buf, int fd)
{
	int _len;

	if(fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		exit(98);
	}

	if (!(*buf))
		*buf = malloc(sizeof(char) * BUFFER_SIZE);

	if (!(*buf))
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		exit(98);
	}
	_len = read (fd, *buf, BUFFER_SIZE);
	if (_len < 0)
	{
		free(*buf);
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		exit(98);
	}
	return (_len);
}

static void copy_writer(char *file, int fd, char *buf, int len)
{
	if (fd < 0 || buf)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	if (write(fd, buf, len) < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
}
