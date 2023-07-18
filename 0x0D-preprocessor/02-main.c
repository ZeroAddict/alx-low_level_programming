#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the name of the file it was compiled from
* Return: Always void
*/

int main(void)
{
	printf("%s\n", __FILE__); /*the file it was compiled from*/
	return (0);
}
