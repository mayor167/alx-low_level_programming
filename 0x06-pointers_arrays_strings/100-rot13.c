#include "main.h"
/**
 * rot13 - function that changes letters to rot13
 * @str: string to be considered
 * Return: string with all letters in rot13 base
 */
char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
