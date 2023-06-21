#include "main.h"
#include <unstdio.h>
/**
 * function _putchar prints _putchar as a std output
 *
 * Return: 0 Success 
 * error: return 1 
 */

int _putchar(char c)
{
return (write(0,&c,1));
}
