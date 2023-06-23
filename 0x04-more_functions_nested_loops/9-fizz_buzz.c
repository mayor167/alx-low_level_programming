#include <stdio.h>
#include "main.h"
/**
 * main -A program prints 1 - 100
 *
 * Return: 0 (Success)
 */
int  main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else if (count % 5 == 0 && count % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", count);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
