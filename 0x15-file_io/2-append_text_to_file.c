#include "main.h"

/**
 * append_text_to_file - adds text to end of file
 * @filename: the name of file
 * @text_content: the number of bytes
 *
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int name, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	name = open(filename, O_WRONLY | O_APPEND);
	if (name == -1)
		return (-1);
	write(name, text_content, i);
	return (1);
}
