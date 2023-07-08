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
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (m = 0; m < argc; m++)
		{
			p = argv[m];
			for (n = 0; n < strlen(p); n++)
			{
				if (p[n] < 48 && p[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(p);
				p++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
