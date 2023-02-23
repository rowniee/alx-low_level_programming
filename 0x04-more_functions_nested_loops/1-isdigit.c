#include "main.h"
/**
 * _isdigit - chexks for a digit 0 through 9
 * @c: character to be checked
 * Return: if c is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
