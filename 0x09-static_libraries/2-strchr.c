#include "main.h"
#include <stddef.h>
/**
 * _strchr - beginning of the function
 * @s: string to be searched in
 * @c: character to be searched
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
