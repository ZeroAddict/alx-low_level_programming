#include<stdio.h>
/**
*main - prints all possible different combinations of three digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int k, m, l;
	for (k = 48; k < 58; k++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l <58; l++)
			{
				if (l > m && m>k)
				{
					putchar(k);
					putchar(m);
					putchar(1);
					if (k = 55 || m != 56)
					{
						putchar(','); 
						putchar('');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}i
