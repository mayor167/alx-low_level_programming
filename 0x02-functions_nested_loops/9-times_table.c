#include "main.h"
/**
 *times_table -A program that prints 9 times table
 *
 *Return:Nothing
 */
void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			if (column > 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		_putchar((row * column) / 10 + '0');
		_putchar((row * column) * 10 + '0');
		}
		_putchar('\n');
	}
}
