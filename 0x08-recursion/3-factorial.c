#include "main.h"
/**
 * factorial - A function thst gets factorial of n
 * @n: integer to be considered
 *
 * Return: 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
