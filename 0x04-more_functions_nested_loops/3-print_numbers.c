#include "main.h"
/**
 * print_numbers -A program that prints number from 0 to 9
 *
 * Return: nothng
 */
void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count + '0');
	}
	_putchar('\n');
}

