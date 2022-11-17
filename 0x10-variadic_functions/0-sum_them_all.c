#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list ap;
	int result = 0;

	if (n == 0)
		return (0);
	va_start(va_list, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(va_list, int);
	}
	
	va_end(ap);
	return (result);
}
