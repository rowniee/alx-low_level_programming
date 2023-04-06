#include "main.h"
#include <stdio.h>
/**
 * flip_bits - bits you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned long int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
