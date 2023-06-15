#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: integer to be assigned memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
