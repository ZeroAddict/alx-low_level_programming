#include "main.h"
#include <stdio.h>

/**
 * main - prints all the argument received
 * @argc: argument number passed
 * @argv:argument vector (character) array name
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
