#include "variadic_functions.h"
/**
* sum_them_all takes the sum of its parameters when called
*@n: the number of arguments passed in sum_them_all
*@...: variadic function
*Return: the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
/*... represents a variable number of arguments*/
{
	unsigned int i = 0;
	int sum = 0; /*counter holds optionals in va_arg*/

	va_list list; /*holds arg needed by va start*/
	va_start(list, n); /*initializes.. grants access to args*/

	for  (; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
	return (0);
}
