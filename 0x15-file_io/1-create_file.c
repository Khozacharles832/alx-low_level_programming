#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a new file
 * @filename: name of file to create
 * @text-content: the text to add to new file
 *
 * Description: a function that creates a new file
 *
 * Return:  on success 1, or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	fd = fopen(filename, "w");
	if (fd == NULL)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, fd);

	fclose(fd);

	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);
	return (0);
}
