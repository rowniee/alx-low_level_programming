#include "main.h"
/**
 * _puts - beginning of my function
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
