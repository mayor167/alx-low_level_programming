#include "main.h"
/**
 * _strncat -A function that concatenates two strings.
 * @dest: The 1st string to be concatenated
 * @src: The 2nd string to concatenated
 * @n: size of 2nd string
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;

	while (*(dest + len1) != '\0')
		len1++;
	while (*(src + len2) != '\0' && len1 < 97 && len2 < n)
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	*(dest + len1) = '\0';
	return (dest);
}
