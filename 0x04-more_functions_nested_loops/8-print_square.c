#include "main.h"
/**
 * print_square -A program that prints square
 *
 * @size: The size of the sqaure
 * Return: nothing
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
