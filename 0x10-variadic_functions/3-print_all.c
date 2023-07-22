#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_all - prints anything when function is called
*@format: va arg reps all types of arguments passed into print_all
*@...: variadic argument variable number of arguments
*Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sptr = "";

	va_list list;

	va_start(list, format);

		while(format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sprtr, va_arg(list, char));
					break;
				case 'd':
					printf("%s%d", sprtr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sprtr, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sprtr, str);
					break;
				default:
					i++;
					continue;
			}
			sprtr = ", ";
			i++;
		}
}
