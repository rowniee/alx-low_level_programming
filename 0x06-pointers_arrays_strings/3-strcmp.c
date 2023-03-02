#include "main.h"
/**
 * _strcmp - start of the function
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
}
