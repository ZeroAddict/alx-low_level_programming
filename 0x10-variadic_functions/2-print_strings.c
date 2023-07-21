#include "variadic_functions.h"
#include <stdarg.h>
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

	va_list list;

	va_start(list, n);

	for  (i = 0; i < n; i++)
	{
		const char *str = va_arg(list, int);

		if(str != NULL) /*if it is not null print sperator*/
			printf("%d", va_arg(list, int));
		else if(separator != NULL && i < n - 1)
			printf("%s", separator);
		else
			printf("%s %d", separator, va_arg(list, int));
	}
	va_end(list);
}
