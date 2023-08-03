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
	unsigned int number = 0, mult = 1;
	int counter;

	if (b == '\0')
		return (0);

	for (counter = 0; b[counter];)
		counter++;

	for (counter -= 1; counter >= 0; counter--)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);

		number += (b[counter] - '0') * mult;
		mult *= 2;
	}

	return (number);
}
