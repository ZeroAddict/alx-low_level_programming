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
	if (j > 5)
	{
		printf(" Last digit of %d is", n);
		printf(" %d", j);
	}
	else if (j < 6 && j != 0)
	{
		printf(" Last digit of numb is %d and is less than 6 and not 0", j);
	}
	else
	{
		printf(" Last digit of numb is %d and is 0", j);
	}
	return (0);
}

