/*
* positive_or_negative - checks the sign of a number
*
* Return: Always 1, 0 or 1
*/

#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
