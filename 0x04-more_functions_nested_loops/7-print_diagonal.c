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
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
