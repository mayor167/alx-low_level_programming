#include "main.h"
/**
 * reverse_array -A program that reverse the content of array
 * @a: array to be compared
 * @n: size of array
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int exchange;
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		exchange = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) + exchange;
		start++;
		end--;
	}
}
