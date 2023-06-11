#include "main.h"
/**
 * _puts - beginning of the programme
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
