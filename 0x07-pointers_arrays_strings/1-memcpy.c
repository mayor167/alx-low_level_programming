#include "main.h"
/**
 * _memcpy -A function that copies memory area
 *@dest: Address to be printed
 *@src: 2nd value
 *@n: 3rd value
 *
 * Return: A pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
