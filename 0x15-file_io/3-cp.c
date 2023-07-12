#include "main.h"

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
	char buffer_size[1024];
	int first, second;
	int source_file, destination_file;

	first = 1024;
	second = 0;

	if (argc != 3)
	{	
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (destination_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		close(destination_file);
		exit(99);
	}
	while (first == 1024)
	{
		first = read(source_file, buffer_size, 1024);
		if (first == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		second = write(destination_file, buffer_size, first);
		if (second < first)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(source_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", source_file);
		exit(100);
	}
	if (close(destination_file) == -1)
	{	
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", destination_file);
		exit(100);
	}

	return (0);
}
