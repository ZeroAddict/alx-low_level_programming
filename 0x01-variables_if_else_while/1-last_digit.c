#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int j;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	j = n % 10;

	printf("Last digit of %d is;", n);
	printf(" %d", j);

	if (j > 5)
	{
		printf(" and is greater than 5");
	}
	else if (j < 6 && j != 0)
	{
		printf(" and is less than 6 and not 0");
	}
	else
	{
		printf(" and is 0");
	}
	return (0);
}
