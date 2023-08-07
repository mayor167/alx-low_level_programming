#include "main.h"

/**
 * append_text_to_file -This func appends text at the end of a file.
 * @filename: file name to be appended to the text.
 * @text_content:NULL terminated string to add at the end of the file.
 * Return: (1) if it succeeds, (-1) if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, length = 0;

	if (!filename)
		return (-1);
	fileDescriptor = open(filename, O_RDWR | O_APPEND);
	if (fileDescriptor < 0)
		return (-1);
	if (!text_content)
	{
		close(fileDescriptor);
		return (1);
	}

	while (text_content[length])
		length++;
	if (write(fileDescriptor, text_content, length) < 0)
	{
		close(fileDescriptor);
		return (-1);
	}
	close(fileDescriptor);
	return (1);
}
