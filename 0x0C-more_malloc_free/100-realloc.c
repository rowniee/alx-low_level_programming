#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates amemeory block
 * @ptr: pointer to the previous memory block
 * @old_size: size of the previous allocated memory
 * @new_size: size of the new memory block
 * Return: pointer to the newly memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		mem = malloc(new_size);

		if (!mem)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (!mem)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
