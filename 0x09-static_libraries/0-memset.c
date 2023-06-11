#include "main.h"
/**
 * _memset - beginning of the programme
 * @s: pointer to a character
 * @b: character to be printed
 * @n: number of times to be printed
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
