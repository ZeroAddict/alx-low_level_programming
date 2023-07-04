#include "main.h"

/**
* *_strcpy - copies the string pointed to by character pointer srz
* @srz: char type string
* @first: char type string serves as destination
* String *srz points to is copied into the buffer pointed at by *first
* Return: pointer to first
*/

char *_strcpy(char *first, char *srz)
{
	int x = -1;

	do {
		x++;
		first[x] = srz[x];
	} while (srz[x] != '\0');

	return (first);
}
