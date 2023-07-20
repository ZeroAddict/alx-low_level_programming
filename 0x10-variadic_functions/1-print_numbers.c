#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print numbers passed as parameter
* @separator: is a string in use to separate the printed numbers
* @n: the number argument in print_numbers
*
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
/*... represents a variable number of arguments*/
	unsigned int j;
	va_list print_num;
	va_start(print_num, n);

	for  (j = 0; j < n; j++)
	{
		/*if(!separator == '\0') if it is not null print sperator*/
			printf("%d", va_arg(print_num, int));
		if(separator != NULL && j < n-1)
			/*printf("%d", va_arg(print_num, int));*/
		/*else*/
			printf("%s", separator);
	}
	va_end(print_num);
	printf("\n");
}
