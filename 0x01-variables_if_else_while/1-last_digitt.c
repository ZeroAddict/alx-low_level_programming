#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	j = n % 10;

	/* your code goes there */
        /*for (n = 0; n <= 10; n++)*/
	{
		if (j > 5) 
	{
		printf("last digit of %d is %d and is greater than 5\n", n, j);
	}
	if (j == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, j);
	}
	if (j < 6 && j != 0)
	{
	printf("last digit of %d is %d and is les than 6 and not 0\n", n, j);
	}
	}

		return (0);
}
