#include "main.h"

/**
 * append_text_to_file - a function to append text to a file
 * @filename: the name of the file
 * @text_content: the text to append
 *
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor, _length, s_error;

	if (!filename || !text_content || !text_content[0])
		return (-1);

	descriptor = open(filename, O_WRONLY | O_APPEND);
	if (descriptor < 0)
		return (-1);

	_length = 0;
	while (text_content[_length])
		_length++;

	s_error = write(descriptor, text_content, _length);
	close(descriptor);

	return ((s_error < 0) ? -1 : 1);
}
