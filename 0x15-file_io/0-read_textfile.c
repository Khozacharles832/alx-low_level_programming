#include "main.h"

/**
 * read_textfile - reads data from a text file and prints it
 * @filename: the name of the text file to print
 * @letters: the number of letters to print
 *
 * Return: the actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	int descriptor, s_error, read_c;

	descriptor = read_c = s_error = 0;
	if (!filename || !letters)
		return (0);
	descriptor = open(filename, O_RDONLY);
	if (descriptor < 0)
		return (0);

	temp = malloc(letters + 1);
	if (!temp)
	{
		close(descriptor);
		return (0);
	}

	read_c = read(descriptor, temp, letters);
	if (descriptor < 0)
	{
		free(temp);
		close(descriptor);
		return (0);
	}

	temp[read_c] = '\0';

	s_error = write(STDOUT_FILENO, temp, read_c);
	free(temp);
	close(descriptor);

	return ((s_error <= 0) ? 0 : read_c);
}
