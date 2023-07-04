#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point, function prints a chessboard
 * @b: array variable pointer
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*b)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(b[i][n]);
		putchar('\n');
	}
}
