#include <stdio.h>
#include "main.h"

/**
*main - prints the progam name
*@argc: argument represents size of command (number)
*@argv: argument represents the name of array (character)
*Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[argc * 0]);
	}

	return (0);
}
