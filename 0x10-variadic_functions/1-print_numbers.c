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
	int num_list;

	va_start(print_num, n);
	num_list = va_arg(print_num, int);

	j = 0;
	while (j < n)
	{
		/*num_list = va_arg(print_num, int);*/
		printf("%d", num_list);		
	}
	if (j < n - 1 && (separator != NULL))
	{
		printf("%s", separator);
	}
	va_end(print_num);
	printf("\n");
}
