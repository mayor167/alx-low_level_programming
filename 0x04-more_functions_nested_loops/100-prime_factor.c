#include <stdio.h>
#include <math.h>
/**
 * main -A program that print the largest prime factor
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long x;
	long maxf;
	long number = 612852475143;
	double sqaure = sqrt(number);

	for (x = 1; x <= sqaure; x++)
	{
		if (number % x == 0)
		{
		maxf = number / x;
		}
	}
	printf("%1d\n", maxf);
	return (0);
}
