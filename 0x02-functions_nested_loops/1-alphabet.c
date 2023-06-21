#include "main.h"
/**
 *print_alphabet -A program that prints alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alpabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	_putchar('\n');
	}
}
