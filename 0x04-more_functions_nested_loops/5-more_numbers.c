#include "main.h"
/**
 * more_numbers -A program that prints 0 to 14 ten times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int num_of_time;
	int number;

	for (num_of_time = 0; num_of_time < 10; num_of_time++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
			{
			_putchar('0' + (number / 10));
			}
			else
			_putchar('0' + (number % 10));
		}

	_putchar('\n');
	}
}
