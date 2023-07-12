#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a new file
 * @filename: name of file to create
 * @text_content: the text to add to new file
 *
 * Description: a function that creates a new file
 *
 * Return:  on success 1, or -1
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);
	write(new_file, text_content, i);

	return (1);
}
