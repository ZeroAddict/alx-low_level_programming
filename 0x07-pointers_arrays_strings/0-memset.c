#include "main.h"
/**
* _memset - fill a block of memory with a specific value
* @s: starting address of memory to be filled
* @c: the value desired
* @n: number of bytes to be changed
* Return: array with new values for n bytes
*/
char *_memset(char *s, char c, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = c;
		n--;
	}
	return(s);
}
