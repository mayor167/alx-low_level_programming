#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes..
 *@s: 1st value
 *@accept: 2nd value
 *
 * Return:a pointer s that matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int counter = 0;

	while (*s)
	{
		while (accept[counter] != '\0')
		{
			if (*s == accept[counter])
				return (s);
			counter++;
		}
		counter = 0;
		s++;
	}
	return ('\0');
}
