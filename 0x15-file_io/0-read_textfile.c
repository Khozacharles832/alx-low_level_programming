#include "main.h"

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
	int file_descriptor, error, bytes_read;
	char *buffer;

	file_descriptor = error = bytes_read;

	if (!filename || letters)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';

	error = write(STDOUT_FILENO, buffer, bytes_read);
	if (error <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (0);
}
