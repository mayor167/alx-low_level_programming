#include <stdio.h>
/*
 * main:A program that prints all single digit numbers of base 10 from 0
 * Return: 0 (Success)
 */
int main(void)
{
int singleDigit;
for (singleDigit = 0; singleDigit < 10; singleDigit++)
{
putchar(singleDigit);
}
putchar("\n");
return (0);
}
