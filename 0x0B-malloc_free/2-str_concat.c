#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string to
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (k = 0, l = 0 ; k < (i + j + 1) ; k++)
	{
		if (k < i)
		{
			a[k] = s1[k];
		}
		else
			a[k] = s2[l++];
	}
	return (a);
}
