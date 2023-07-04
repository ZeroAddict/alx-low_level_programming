#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * then a new line
 * @str: Input string d
 */
void puts_half(char *str)
{
	int w_string, h_string;

	w_string = 0;
	while (str[w_string] != '\0')
		w_string++;
	h_string = w_string / 2;

	if (w_string % 2 == 1i)
		h_string++;
		/*since half string is < whole*/

	while (h_string < w_string)
	{
		puts_half(s[h_string]);
		h_string++
	}
	putchar('\0');
}
