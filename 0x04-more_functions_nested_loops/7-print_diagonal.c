#include "main.h"
/**
 * print_diagonal -A program that draws diagonal line
 *
 * @n: The number of times the \ should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
