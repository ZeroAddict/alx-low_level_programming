#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program returns integer result of multipl of 2 num
 * @argc: number of command arguments
 * @argv: array vector
 * Return: 1 if argc > 2 Error if argc < 2
 */

int main(int argc, char *argv[])
{
	int m, n;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", m * n);
	}
	return (0);
}
