#include "main.h"
/**
 * _strncpy - A function that contenate strings
 * @dest: 1st string to be concatenated
 * @src: 2rd string to be concatenated
 * @n: size of 2rd string
 * Return: 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
		*(dest + 1) = *(src + counter);
	for (; counter < n; counter++)
	{
		*(dest + counter) = '\0';
	}
	return (dest);
}
