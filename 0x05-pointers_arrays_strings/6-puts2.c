#include "main.h"

void puts2(char *str);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = "0123456789";
	puts2(s);
	return (0);
}

/**
 * puts2 - prints characters of a string
 * @str: the used string reference
 * Return: void
 */
void puts2(char *s)
{
    int z = 0;
    while (s[z] != '\0')
    {
        if (z % 2 == 0)
        {
            _putchar(s[z]);
        }
        z++;
    }
    _putchar('\n');
}
