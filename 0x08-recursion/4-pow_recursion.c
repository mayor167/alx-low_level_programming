#include "main.h"
/**
 * _pow_recursion -A function that raises x to the power of y
 * @x:Integer to be considered
 * @y: Power of integer x
 *
 * Return: 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
