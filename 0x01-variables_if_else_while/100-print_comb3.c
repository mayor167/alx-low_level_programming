#include <stdio.h>
/**
 * main -A program that prints the smallest combibation of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
		if (i == j)
		continue;
		else
		putchar(i + '0');
		putchar(j + '0');
	putchar(',');
	putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
