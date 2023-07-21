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
	va_list argm;
	f_dt form_types[] = {
			{"c", printChar},
			{"i", printInt},
			{"f", printFloat},
			{"s", printCharpntr}
			};
	unsigned int i = 0;
	unsigned int k = 0;
	char *sprtr = "";

	va_start(argm, format);

	while (format != NULL && format[i])
	{
		k = 0;
		while (k < 4)
		{
			if (format[i] == *form_types[k].identifier)
			{
				form_types[k].f(sprtr, argm);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	va_end(argm);
	printf("\n");
}

/**
*printChar - prints char data format
*@sprtr: separator of datatypes
*@argm: argument to be printed from a va arg
*Return: void
*/
void printChar(char *sprtr, va_list argm)
{
	printf("%s%c", sprtr, va_arg(argm, int));
}

/**
*printInt - prints integer data format
*@sprtr: separator of datatypes
*@argm: argument to be printed from a va arg
*Return: void
*/
void printInt(char *sprtr, va_list argm)
{
	printf("%s%d", sprtr, va_arg(argm, int));
}

/**
*printFloat - prints float data format
*@sprtr: separator of datatypes
*@argm: argument to be printed from a va arg
*Return: void
*/
void printFloat(char *sprtr, va_list argm)
{
	printf("%s%f", sprtr, va_arg(argm, int));
}

/**
*printCharpntr - prints char pointr data format
*@sprtr: separator of datatypes
*@argm: argument to be printed from a va arg
*Return: void
*/
void printCharpntr(char *sprtr, va_list argm)
{
	char *arg = va_arg(argm, char*);

	if (arg == NULL)
	{
	printf("%s%s", sprtr, "(nil)");
	return;
	}
	printf("%s%s", sprtr, argm);
}
