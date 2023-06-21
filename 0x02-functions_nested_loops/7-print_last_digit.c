#include "main.h"
/**
 * print_last_digit -A program that prints the last digit of a number
 * @num: The charcteer to be checked
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
