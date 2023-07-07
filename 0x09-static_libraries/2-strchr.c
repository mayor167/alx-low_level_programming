#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 *@s: 1st value -char
 *@c: 2nd value - char
 *
 * Return: pointer to the first occurrence of the
 * character c in the string s or NULL
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
