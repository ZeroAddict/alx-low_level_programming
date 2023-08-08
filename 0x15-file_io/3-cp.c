#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int filDes);

/**
 * create_buffer - Allocs 1024 bytes for buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A ptr to the newly-alloc memry for buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descrptrs.
 * @filDes: The file descriptor to be closed.
 */
void close_file(int filDes)
{
	int x;

	x = close(filDes);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filDes);
		exit(100);
	}
}

/**
 * main - Copies the file contents file_from - to.
 * @argc: argument count.
 * @argv: An array of pointers to args.
 *
 * Return: 0 on success.
 *
 *Description: If argc !correct, exit code 97.
 *exit code 98, if file_from !r or !exist.
 *If to_file cannot be created || written in - EC 99.
 *on close fail: file_to or file_from - EC 100.
 */
int main(int argc, char *argv[])
{
	int file_from, to_file, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buff, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
		}

		w = write(to_file, buff, r);
		if (to_file == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
			    "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(file_from, buff, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(file_from);
	close_file(to_file);

	return (0);
}
