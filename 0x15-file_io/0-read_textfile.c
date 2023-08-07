#include "main.h"

/**
 * read_textfile -This func reads a text file and prints to std-output
 * @filename: arg pointer for file be opened
 * @letters: number of letters to be read and printed.
 * Return: number of letters,otherwise 0 if:
 * - filename is NULL.
 * - the file can not be opened or read.
 * - write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor = -1;
	ssize_t output = 0;
	char *buffer;

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fileDescriptor);
		return (0);
	}

	output = read(fileDescriptor, buffer, letters);
	if (output < 0)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, output);
	free(buffer);
	close(fileDescriptor);
	if (output < 0)
		return (0);
	return (output);
}
