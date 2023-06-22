#include "main.h"
/**
 * print_diagonal -A program that draws diagonal line
 *
 * @n: The number of times the \ should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (int i = 0; i <= n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
