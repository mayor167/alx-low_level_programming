#include "main.h"
#include <stdio.h>
/**
* print_diagsums -A function that prints the sum of the two diagonals
 *@a: 1st value
 *@size:The size to be considered
 *Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_dia1 = 0;
	int sum_dia2 = 0;
	int k = size - 1;
	int l = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{

			if (i == j)
				sum_dia1 += a[l];
		if (j == k)
			sum_dia2 += a[l];
		l++;
		}
	k--;
	}

printf("%i, %i\n", sum_dia1, sum_dia2);
}
