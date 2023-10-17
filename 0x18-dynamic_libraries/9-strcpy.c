#include "main.h"

/**
* *_strcpy - copies the string pointed to by character pointer src
* @src: char type string
* @dest: char type string serves as destination
* String *src points to is copied into the buffer pointed at by *dest
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
