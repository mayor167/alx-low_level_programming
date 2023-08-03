#include "main.h"

/**
 * binary_to_uint -This function converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - converted result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int count_len, bin;

	if (!b)
		return (0);

	ui = 0;

	for (count_len = 0; b[count_len] != '\0'; count_len++)
		;

	for (count_len--, bin = 1; count_len >= 0; count_len--, bin *= 2)
	{
		if (b[count_len] != '0' && b[count_len] != '1')
		{
			return (0);
		}

		if (b[count_len] & 1)
		{
			ui += bin;
		}
	}

	return (ui);
}
