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
		for (j = i + 1; j <= 9; j++)
		{
			if (i == j)
				continue;

				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
