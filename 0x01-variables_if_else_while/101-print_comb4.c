#include<stdio.h>
/**
*main - prints all possible different combinations of three digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int k;
	int m;
	int l;

	for (k = 48; k < 57; k++)
	{
		for (m = 48; m < 57; m++)
		{
			for (l = 48; l < 57; l++)
			{
				if (l > m > k)
				{
				putchar(k);
				putchar(m);
				putchar(l);
					if (k != 55 && m != 56 && l != 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
