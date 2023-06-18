#include <stdio.h>
/*
 * main:A program that prints all number in base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
int num_in_b16;
for (num_in_b16 = 0; num_in_b16 < 16; num_in_b16++)
{
if (num_in_b16 <= 9)
{
putchar(num_in_b16 + '0');
}
else
{
putchar(num_in_b16 + 'a');
}
}
putchar('\n');
return (0);
}
