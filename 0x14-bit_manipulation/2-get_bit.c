#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given
 * index.
 * @n: unsigned long int input to be considered
 * @index: index of the bit to be used
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0 && index < 64)
		return (0);

	for (count = 0; count <= 63; n >>= 1, count++)
	{
		if (index == count)
		{
			return (n & 1);
		}
	}

	return (-1);
}
