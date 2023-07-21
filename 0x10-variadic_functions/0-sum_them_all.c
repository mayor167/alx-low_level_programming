#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that prints sum of its args
 * @n: arg inputs to be considred
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, const unsigned int);
	}

	va_end(arglist);

	return (sum);
}
