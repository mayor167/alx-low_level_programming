#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/*
 *betty style doc for function main goes there
 *main: Program checks random number if it is last digit and prints
 * Return: 0 (success)
 *
 * /

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5)
{
printf("Last digit of %d is "n" and is greater than 5\n", n);
}
else if (n == 0)
{
printf("last digit of %d is "n" and is 0\n", n);
}
else if (n < 6 && != 0)
{
printf("Last digit of %d is "n" and is less than 6 and not 0\n", n);
}
	return (0);
}
