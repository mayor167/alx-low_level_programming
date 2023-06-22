#include "main.h"
/**
 * jack_bauer -A program that prints every minnute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour_count;
	int min_count;

	for (hour_count = 0; hour_count < 24; hour_count++)
	{
		
		for (min_count = 0; min_count < 60; min_count++)
		{
		_putchar (hour_count / 10 + '0');
		_putchar (hour_count % 10 + '0');
		_putchar(':');
		_putchar(min_count / 10 + '0');
		_putchar(min_count % 10 + '0');
		_putchar('\n');
		}
	}

}
