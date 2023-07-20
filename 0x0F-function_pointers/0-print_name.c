#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function prints the name
 * @name: name to be considered
 * @f: function f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
