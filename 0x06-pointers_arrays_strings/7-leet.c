#include "main.h"
/**
 * leet - change vowels to number
 * @str: string to be considered
 * Return: string with all vowels changed
 */
char  *leet(char *str)
{
	char a[] = "ae0tlAEOTL";
		char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = n[j];
			}
		}
		i++;
	}
	return (str);
}
