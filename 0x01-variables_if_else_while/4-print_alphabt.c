#include <stdio.h>
/*
 * main: A program that prints alphabets in lowercase and excludes some
 * Return: 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' && letter == 'e')
{
continue;
putchar(letter);
}
}
putchar('\n');
return (0);
}
