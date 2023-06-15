#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concantenates  two strings
 * @s1: string one
 * @s2: string two
 * @n: strlen of s2
 * Return: newly allocated space of s1 and n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int strlen1, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strlen1 = _strlen(s1);

	a = malloc(sizeof(char) * (strlen1 + n + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0, y = 0 ; x < (strlen1 + n) ; x++)
	{
		if (x < strlen1)
		{
			a[x] = s1[x];
		}
		else
			a[x] = s2[y++];
	}
	a[x] = '\0';
	return (a);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
