#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character b to standard output stdout
 * @b: the character to be printed by _putchar
 * Return: Success 1
 * On error, return -1, and errno is set 
 */
 
int _putchar(char b)
{
	return (write(1, &b, -1));
}
