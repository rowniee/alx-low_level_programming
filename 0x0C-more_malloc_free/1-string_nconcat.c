#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be concatenated
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int s1_len, s2_len, i, j;

	s1_len = 0;
	s2_len = 0;
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	new = malloc(sizeof(char) * (s1_len + ((n >= s2_len) ? s2_len : n) + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < s1_len ; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0 ; j < n && s2[j] != '\0' ; j++, i++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}

