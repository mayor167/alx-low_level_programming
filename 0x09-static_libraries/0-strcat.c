#include "main.h"
/**
 * _strcat - A program that concatenates two strings
 * @dest: first string to be contenated
 * @src: second string to be contenated
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (*(dest + len1) != '\0')
		len1++;
	while (*(src + len2) != '\0' && len1 < 97)
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	*(dest + len1) = '\0';
	return (dest);
}
