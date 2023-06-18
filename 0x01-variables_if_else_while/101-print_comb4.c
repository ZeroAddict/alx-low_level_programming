/**
*main - prints all possible different combinations of three digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int n, m, l;

	for (n = 48; n < 57; n++)
	{
		for (m = 48; m < 57; m++)
		{
			for (l = 48; l < 57; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					putchar(',');
					putchar('');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
