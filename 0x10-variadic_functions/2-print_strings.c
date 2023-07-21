#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: pointer to comma space
 * @n: number of args to be considered
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int arg_counter;
	va_list arglist;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(arglist, n);

	if (n > 0)
		printf("%s", va_arg(arglist, char *));
	for (arg_counter = 1; arg_counter < n; arg_counter++)
	{
		ptr = va_arg(arglist, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(arglist);
}
