#include "main.h"
/**
 * set_string - Entry point function sets value of pointer to character
 * @s: input pointer to a pointer to a character s
 * @t: input character serving as a pointing variable
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *t)
{
	*s = t;
}
