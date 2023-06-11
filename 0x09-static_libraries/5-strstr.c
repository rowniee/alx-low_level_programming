#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurence
 * @haystack: input for haystac
 * @needle: input  for needle
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystac, char *needle)
{

	while (*haystac != '\0')
	{
		char *beginning = haystac;
		char *pattern = needle;

		while (*pattern == *haystac && *pattern != '\0'
		       && *haystac != '\0')
		{
			haystac++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystac = beginning + 1;
	}
	return ('\0');
}
