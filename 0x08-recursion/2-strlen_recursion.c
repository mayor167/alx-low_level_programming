#include "main.h"
/**
 * _strlen_recursion -A function that returns Length of String
 * @s: string to be considered
 *
 * Return: 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
