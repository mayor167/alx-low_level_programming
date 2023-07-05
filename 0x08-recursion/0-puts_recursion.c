#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string to be considered
 *Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
