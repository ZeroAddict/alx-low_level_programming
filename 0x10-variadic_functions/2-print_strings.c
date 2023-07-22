#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - print nstrings passed as parameter
* @separator: is a string in use to separate the printed numbers
* @n: the number argument in print_numbers
*
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for  (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL) /*if it is not null print sperator*/
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
