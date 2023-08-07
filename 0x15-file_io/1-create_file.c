#include <string.h>
#include "main.h"

/**
 * create_file - a function to create a new file
 * @filename: the name of the new file
 * @text_content: the text to append to the new file
 *
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t _length, s_error;
	int descriptor;

	if (!filename || text_content == NULL)
		return (-1);

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (descriptor < 0)
		return (-1);

	_length = strlen(text_content);
	s_error = write(descriptor, text_content, _length);

	close(descriptor);
	return ((s_error == _length) ? 1 : -1);
}
