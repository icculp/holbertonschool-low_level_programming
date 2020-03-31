#include "holberton.h"
#include <string.h>

/**
* create_file - Creates a file
* @filename: Filename to create
* @text_content: Null terminated string to write to file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	w = write(STDIN_FILENO, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
