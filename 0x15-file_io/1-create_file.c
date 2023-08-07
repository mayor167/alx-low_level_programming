#include "main.h"

/**
 * create_file -This func creates a file.
 * @filename: file name to be created.
 * @text_content: NULL terminated string to be written in the file.
 * Return: (1) it succeeds, (-1) if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, length = 0;

	if (!filename)
		return (-1);
	fileDescriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fileDescriptor < 0)
		return (-1);

	while (text_content && text_content[length])
		length++;
	if (write(fileDescriptor, text_content, length) < 0)
	{
		close(fileDescriptor);
		return (-1);
	}
	close(fileDescriptor);
	return (1);
}
