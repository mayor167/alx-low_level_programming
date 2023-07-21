#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: poniter to comma space
 * @n: elements to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int arg_counter;
	va_list arglist;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(arglist, n);

	if (n > 0)
		printf("%d", va_arg(arglist, int));
	for (arg_counter = 1; arg_counter < n; arg_counter++)
		printf("%s%d", sep, va_arg(arglist, int));
	printf("\n");
	va_end(arglist);
}
