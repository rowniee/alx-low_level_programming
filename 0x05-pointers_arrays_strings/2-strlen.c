#include "main.h"
/**
 * _strlen - begining of my programme
 * @s: length of a string to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
