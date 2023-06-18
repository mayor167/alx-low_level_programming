#include <stdio.h>
/**
 * main - A program that prints combination of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int single_digit;
for (single_digit = 0; single_digit < 10; single_digit++)
{
putchar(single_digit + '0');
if (single_digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
