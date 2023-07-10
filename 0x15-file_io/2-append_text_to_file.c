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
	i = 0;

	if (filename == NULL)
		return (0);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	name = open(filename, O_WRONLY | O_APPEND);
	if (name == -1)
		return -1;
	write(name, text_content, i);
	return (1);
}
