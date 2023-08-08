#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads/prints txt to POSIX stdout.
 * @filename: A ptr to the name (file.)
 * @letters: The number of letters the func reads/prints.
 * Return: 0, On failure or NULL file, return ssize_t w/r.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t o_filDes, r_read, w_write;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o_filDes = open(filename, O_RDONLY);
	r_read = read(o_filDes, buff, letters);
	w_write = write(STDOUT_FILENO, buff, r_read);

	if (o_filDes == -1 || r_read == -1 || w_write == -1 || w_write != r_read)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o_filDes);

	return (w_write);
}
