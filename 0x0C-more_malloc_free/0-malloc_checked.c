#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - alloates memory using malloc
 * @b:how much bits to use
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
