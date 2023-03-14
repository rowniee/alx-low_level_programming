#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arrays of chars and initializes it with a specific char
 * @size: unsigned integer
 * @c: charactwer to b created
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}
	array = (char *)malloc(size * sizeof (char));
	if (array == NULL)
	{
		return NULL;
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return array;
}
