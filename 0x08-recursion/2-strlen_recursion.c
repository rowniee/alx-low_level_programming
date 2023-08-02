#include "main.h"
/**
 * _strlen_recursion - length of a stri g
 * @s: string to be calculated
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
