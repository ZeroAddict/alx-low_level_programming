#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the opcodes
*@argc: argument coint
* @argv: character array of arguments
* Return: 0 Success
*/

int main(int argc, char *argv[])
{
	int num_of_bytes;
	char *arr;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned int i;
	
	arr = (char *)main;
	for (i = 0; i < num_of_bytes - 1; i++)
		{
			printf("%02hhx ", arr[i]);
		}
	printf("%02hhx\n", arr[i]);
	return (0);
}
