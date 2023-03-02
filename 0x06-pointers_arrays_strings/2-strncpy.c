#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: integer
 * Return: charctr
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		ptr[i] = src[i];
	}
	for (; i < n ; i++)
	{
		ptr[i] = '\0';
	}
	return (dest);
}
