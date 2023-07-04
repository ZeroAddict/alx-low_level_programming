#include "main.h"

/**
 * rev_string: prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 * Return: 0
 */

 void rev_string(char *s)
 {
 	char hold;
	int stringlength, z, half;

	for (length = 0; !(s[stringlength] = '\0'); stringlength++);
	z = 0;
	half = stringlength / 2;

	while (half--)
	{
		hold = s[stringlength - z - 1];
		s[stringlength - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
