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
	size_t f_name, nb_read, all;
	char *ptr;

	ptr = malloc(letters * sizeof(char));
	if (ptr == NULL)
		return (0);
	if (filename == NULL)
	{
		free(ptr);
		return (0);
	}

	f_name = open(filename, O_RDONLY);
	if (f_name == -1)
	{
		free(ptr);
		return (0);
	}

	nb_read = read(f_name, ptr, letters);
	all = write(STDOUT_FILENO, ptr, nb_read);
	close(f_name);
	free(ptr);

	return (nb_read);
}
