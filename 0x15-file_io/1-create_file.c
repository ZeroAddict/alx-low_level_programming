#include "main.h"

/**
 * create_file - creates file.
 * @filename: A ptr to the name of the file.
 * @text_content: ptr to string to write in file.
 *
 * Return: -1 always on fail, 1 if succ
 */
int create_file(const char *filename, char *text_content)
{
	int o, w_write;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	/*
	*else if (text_content != NULL)
	*{
	*	len = 0;

	*	while (text_content[len])
	*	len++;
	*}
	*/
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_write = write(o, text_content, len);

	if (o == -1 || w_write == -1)
		return (-1);
	/*
	 *if (text_content == NULL)
	*{
	*	o = open(filename, O_CREAT);
	*}
	*/
	close(o);

	return (1);
}
