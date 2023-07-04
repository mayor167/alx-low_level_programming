#include "main.h"
/**
 * _memset -A function that fills memory with a constant byte
 *@s: 1st value
 *@b: 2nd value
 *@n: 3rd value
 *Return: The memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;

	}
	return (s);
}
