#include <stdlib.h>
#include <stdio.h>
/**
 *main - allows program to print the least no of coins to make change
 *@argc: argument count which represents cents count for atoi function
 *@argv: argument vector number of coins that make a cent change
 *
 *Return: 1 for Error case, 0 Always for Success
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
