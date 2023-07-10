#include "main.h"
#define BUFFER_SIZE 1024

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
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	const char *source_file;
	const char *destination_file;
	int source_fd;
	int destination_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from_file_to", 97);
	source_file = argv[1];
	destination_file = argv[2];

	source_fd = open(source_file,O_RDONLY);
	if (source_fd == -1)
		print_error_and_exit("Error: can't read from source file", 98);

	destination_fd = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (destination_fd == -1)
		print_error_and_exit("Error: can't write to the destination file", 99);

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit("Error: can't write to destination file", 99);
	}

	if (bytes_read == -1)
		print_error_and_exit("Error: can't close source file descriptor", 100);

	if (close(destination_fd) == -1)
		print_error_and_exit("Error: can't close destination file descriptor", 100);
	return (0);
}
