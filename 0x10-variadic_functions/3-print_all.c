#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - prints anything when function is called
*@format: va arg reps all types of arguments passed into print_all
*@...: variadic argument variable number of arguments
*Return: void
*/
void print_all(const char * const format, ...)
{
	int i;
	int case_restart;
	char *str;
	va_list list;

	va_start(list, format);

		i = 0;
		while (format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(list, int));
					case_restart = 0;
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					case_restart = 0;
					break;
				case 'c':
					printf("%c", va_arg(list, int));
					case_restart = 0;
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					case_restart = 1;
					break;
			}
			if (format[i + 1] != '\0' && case_restart == 0)
				printf(", ");
			i++;
		}
	printf("\n");
	va_end(list);
}
