#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the char c to stdout
 *@c: char to print
 *Return: On success 1
 *On error, -1, errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
