#include "main.h"
/**
 * *_strncat - beginning of the function
 * @dest: string to be appended
 * @src: string to be appended
 * @n: bytes from src to be used
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (i < n && *src != '\0')
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
