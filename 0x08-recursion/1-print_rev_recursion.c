#include "main.h"
/**
 * _print_rev_recursion -A function that Prints a string in reverse
 * @s: string to be considered
 * Return: 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
