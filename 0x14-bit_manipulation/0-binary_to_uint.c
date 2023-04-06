#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num  = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			num = (num << 1) + 0;
		}
		else if (*b == '1')
		{
			num = (num << 1) + 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (num);
}
