#include<stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: char to be filled with
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		a[i] = c;
	}
	return (a);
}
