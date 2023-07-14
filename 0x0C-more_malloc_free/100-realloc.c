#include "main.h"


/**
 * _realloc -A function pointer reallocates a memory block
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of ptr to be considered
 * @new_size: size of the new memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int counter;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (counter = 0; counter < min(old_size, new_size); counter++)
				*((char *)temp_block + counter) = *((char *) ptr + counter);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
