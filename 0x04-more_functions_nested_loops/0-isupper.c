#include "main.h"
/**
 * _isupper -A program that checks for uppercase character
 *
 * @c: The character to be checked
 * Return: 1 for uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
