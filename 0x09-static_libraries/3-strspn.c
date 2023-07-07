#include "main.h"
/**
 * _strspn -A function that gets the length of a prefix substring
 *@s: 1st value -char
 *@accept: 2nd value - char
 *
 * Return:The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter1 = 0;
	int counter2 = 0;
	unsigned int a = 0;

	while (s[counter1] != ' ' && s[counter1] != '\0')
	{
		while (accept[counter2] != '\0')
		{
			if (s[counter1] == accept[counter2])
				a++;
			counter2++;
		}
		counter1++;
		counter2 = 0;
	}
	return (a);
}
