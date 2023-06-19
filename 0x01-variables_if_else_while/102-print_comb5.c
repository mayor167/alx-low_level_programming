#include <stdio.h>
/**
 * main - A program that prints al combinations of two two-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int j;
	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
			}
		}
	}
putchar('\n');
return (0);
}

