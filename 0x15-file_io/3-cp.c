#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - a program that copies from one file to another
 * @argc: the arg count
 * @argv: the arg vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	ssize_t first, second;
	int file_to, file_from;
	char buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit (98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		close(file_from);
		exit (99);
	}

	buf[BUFFER_SIZE];
	while ((first = read(file_from, buf, BUFFER_SIZE)) > 0)
	{
		if ((second = write(file_to, buf, first)) != first)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit (99);
		}
	}

	if (first == -1)
	{
		printf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit (98);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file descriptors \n");
		exit (100);
	}

	return (0);
}

