#include "main.h"
/**
 * *_strcat - beginning of the function
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
