#include "main.h"

/**
 * append_text_to_file - adds txt file end.
 * @filename: ptr to the name of the file.
 * @text_content: ptr to string to add at file end.
 *
 * Return: if no perm, on fail, -1 always, 1 on succ
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w_write, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w_write = write(o, text_content, len);

	if (o == -1 || w_write == -1)
		return (-1);

	close(o);

	return (1);
}
