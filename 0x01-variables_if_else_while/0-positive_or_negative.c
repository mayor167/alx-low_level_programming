#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/*
 * betty style doc for function main goes there
 *
 * main -This program assigns a random number to the variable n and print
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n > 0)
{
printf("%d is positive\n", n);
}

else if (n < 0)
{
printf("%d is negative\n", n);
}

else
{
printf("%d is zero\n", n);
}

return (0);
}
