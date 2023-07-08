#include <stdio.h>
#include "main.h"

/**
 * main - program that Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		/**
		 * 1 from substracted from argc to deduct the program name
		 */
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}

	return (0);
}
