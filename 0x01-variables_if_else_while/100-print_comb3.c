#include <stdio.h>
/**
* main - prints all possible different combinations of two digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int m;
	int j;

	for (m = 48; m <= 57; m++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (m < j)
			{
				putchar(m);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

