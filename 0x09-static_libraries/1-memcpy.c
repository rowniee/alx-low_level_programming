#include "main.h"
/**
 * _memcpy - beginning of thr programme
 * @dest: beginning of the character
 * @src: memory area to be copied from
 * @n: number of times
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
