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
	char mult_of_3[] = "Fizz";
	char mult_of_5[] = "Buzz";
	char mult_of_5_and_3 = "FizzBuzz";

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
		{
			printf("%s", mult_of_3);
		}
		else if (count % 5 == 0)
		{
			printf("%s", mult_of_5);
		}
		else if (count % 5 == 0 && count % 3 == 0)
		{
			printf("%s", mult_of_5_and_3);
		}
		else
		{
			printf("%d", count);
		}
		putchar(' ');
	}
	putchar('\n');
}
