#include <stdio.h>
/*
 * Main:A program that print alphabet in reversed form
 * Return: 0 (Success)
 */
int main(void)
{
char rev_letter;
for (rev_letter = 'z'; rev_letter >= 'a'; rev_letter--)
{
putchar(rev_letter);
}
puttchar('\n');
return (0);
}
