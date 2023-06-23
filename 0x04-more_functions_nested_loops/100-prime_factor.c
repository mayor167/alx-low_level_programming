#include <stdio.h>
/**
 * main -A program that print the largest prime factor
 *
 *@largest_prime_factor -A program thst gets the prime factor
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long long number = 612852475143;
	long long largest_factor = largest_prime_factor(number);

	printf("The largest prime factor is %11d", largest_factor);
	return (0);
}
long largest_prime_factor(long long num)
{
	long long i;
	long long largestfactor = -1;

	while (num % 2 == 0)
	{
	largestfactor = 2;
	num /= 2;
	}
	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
		largestfactor = 1;
		num /= i;
		}
	}
	return (largestfactor);
}
