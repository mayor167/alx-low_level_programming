#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile -This function reads a text file and prints
 * @filename: arg pointer to be considered
 * @letters: size of letters
 *
 * Return: the actual number of letters, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
