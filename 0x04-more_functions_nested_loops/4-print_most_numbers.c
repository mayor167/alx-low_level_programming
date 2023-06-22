#include "main.h"
/**
 * print_most_numbers -A program that prints number from 0 to 9
 *
 *Return:Nothing
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if (count == 2 || count == 4)
			continue;
		else
			_putchar(count + '0');
	}
	_putchar('\n');
}
