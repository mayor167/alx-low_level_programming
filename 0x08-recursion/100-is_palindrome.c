#include "main.h"
/**
 * palind_len - obtains length of a
 * @a: string to be considered
 * @l: integer to count length
 *
 * Return: 0 (Success)
 */
int palind_len(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind_len(a + 1, l + 1));
}
/**
 * palind_str - compares string vs string reverse
 * @a: string to be considered
 * @l: length to be considered
 *
 * Return: 0 (Success)
 */

int palind_str(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind_str(a + 1, l - 2));
}
/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: string to be evaluated
 *
 * Return: 0 (Success)
 */
int is_palindrome(char *s)
{
	int l;

	l = palind_len(s, 0);
	return (palind_str(s, l));
}
