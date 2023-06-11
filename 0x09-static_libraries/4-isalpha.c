#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: value to be checked
 * Return: 1 if lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if
		((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
