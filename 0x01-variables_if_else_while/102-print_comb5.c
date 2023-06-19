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
			for (z = 59; z <= 148; z++)
			{
				if ((x + y) < z)
					if ((x * 10 + y) && (y * 10 + x) != z)
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
