#include "main.h"
/**
 * print_sign -A program that prints sign of a number
 *
 * @n: The number to be checked
 * Return: 1 and print +, otherwise 0 and prints 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
