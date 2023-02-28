#include "main.h"
/**
 * puts2 - prints every other character
 * @str: charater to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i += 2;
	}
	_putchar ('\n');
}
