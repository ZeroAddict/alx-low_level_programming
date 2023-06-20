#include <main.h>
/**
 *main - entry prints character by putchar
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
