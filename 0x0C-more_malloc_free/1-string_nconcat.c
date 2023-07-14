#include "main.h"

/**
 *string_nconcat - Concatenates two strings using at
 *most an inputted number of bytes.
 *@s1: The 1st string to be considered.
 *@s2: The 2nd string to be considered.
 *@n: The number of bytes of s2 to concatenate to s1.
 *
 *Return: If the function fails - NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
