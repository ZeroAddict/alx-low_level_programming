#include <stdio.h>

/**
 * main - prints the number of argument passed into function
 *@argc: arg count helps know size and number (int)
 *@argv: argument vector helps identify name and arg position (char)
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
		printf("%s\n", argv[0]);
	else
		printf("%d\n", argc - 1);
	return (0);
}
