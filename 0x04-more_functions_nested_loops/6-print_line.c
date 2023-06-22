#include "main.h"
/**
 *print_line -A program that draws a straight line
 *
 * @n: The number of times the line will be drawn
 *
 * Return: Nothing
 */
void print_line(int n)
{
	while (n > 0)
	{	_putchar('_');
		n--;
	if (n <= 0)
	{
	_putchar('\n');
	}
	}
	_putchar('\n');
}
