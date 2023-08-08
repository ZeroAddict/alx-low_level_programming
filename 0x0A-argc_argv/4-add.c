#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program returns integer result of addition of 2 num
 * @argc: number of command arguments
 * @argv: array vector
 * Return: print 0 if argc <= 1 Error if no integer present
 */

int main(int argc, char *argv[])
{
	int m;
	int sum;
	unsigned int n;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (m = 0; m < argc; m++)
		{
			char *arg = argv[m];

			for (n = 0; n < strlen(arg); n++)
			{
				if (arg[n] < '0' && arg[n] > '9')
				{
					if (*argv[n] != '0' || *argv[n] != '9')
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arg);
				arg++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
