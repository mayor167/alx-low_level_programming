#include "main.h"
/**
 * _isdigit -A program that checks for digit
 *
 *
 * @c: The character to be checked
 * Return: 1 for c, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
