#include "main.h"
/**
 * print_triangle -A program that prints triangle
 *
 *@size: The size of the sqaure
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (row = 0; row <= size; row++)
	{
		for (column = 0 ; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
