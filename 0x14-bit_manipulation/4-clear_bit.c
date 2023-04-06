#include "main.h"
#include <stdio.h>
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to be modified
 * @index:index of the bit you want to clear
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
