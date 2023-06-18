#include<stdio.h>
/**
*main - prints all possible different combinations of two two-digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int x, y, z;

	for (x = 48; x < 57; x++)
	{
		for (y = 48; y < 57; y++)
		{
			for (z = 58; z <= 147; z++)
			{
				if ((x + y) < z && (x y) != z)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(' ');
					putchar (',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
