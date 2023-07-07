#include "main.h"
/**
 * _strcmp -A function that compares two strings
 * @s1: 1st string to be considered
 * @s2: 2nd string to be considered
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
