#include "main.h"
/**
 * string_toupper - a function changes lowercase to uppercase
 * @str: string to be considered
 * Return: String with uppercase
 */
char *string_toupper(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= 'a' && *(str + counter) <= 'z')
		{
			*(str + counter) = *(str + counter) - 32;
		}
		counter++;
	}
	return (str);
}
