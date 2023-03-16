#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array
 * @nmemb: array to be allocated memory
 * @size: size to be allocated
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *cptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*typecasting*/
	cptr = (char *)ptr;
	for (i = 0 ;  i < nmemb * size ; i++)
	{
		cptr[i] = 0;
	}
	return (ptr);
}
