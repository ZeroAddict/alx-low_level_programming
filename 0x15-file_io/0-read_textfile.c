#include "main.h"

/**
 * create_file - creates file.
 * @filename: ptr to the name of the file.
 * @text_content: ptr to string to write in file.
 *
 * Return: -1 always on fail, 1 if succ
 */
int create_file(const char *filename, char *text_content)
{
	int o, w_write;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_write = write(o, text_content, len);

	if (o == -1 || w_write == -1)
		return (-1);

	close(o);

	return (1);
}
