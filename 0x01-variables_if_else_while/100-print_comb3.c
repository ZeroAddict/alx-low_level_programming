#include <stdio.h>
/**
* main - prints all possible different combinations of two digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if
			{
				(i < j)
				(!(i * j == j * i))
					putchar(i);
					putchar(j);
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

