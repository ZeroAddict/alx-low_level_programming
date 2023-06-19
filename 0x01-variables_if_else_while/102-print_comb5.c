#include<stdio.h>
/**
*main - prints all possible different combinations of two two-digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			for (j = 48; j <= 58; j++)
			{	
				for (z = 48; z <= 58; z++)
				{
					if ((x + y) < z)
						if ((x * 10 + y) && (y * 10 + x) != z)
						{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(j);
						putchar(z);
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
