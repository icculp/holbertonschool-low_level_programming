#include "holberton.h"
#include <string.h>

/**
* append_text_to_file - Appends text at end of a file
* @filename: Filename to append to
* @text_content: Null terminated string to write to file
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
