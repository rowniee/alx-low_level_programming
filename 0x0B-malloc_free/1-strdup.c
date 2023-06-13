#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to an allocated space
 * @str: string to be duplicated
 * Return: a copy of the duplicated string
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
		;
	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0 ; c < i ; c++)
	{
		a[c] = str[c];
	}
	a[c] = '\0';
	return (a);
}
