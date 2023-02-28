 #include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int start_index;

	while (str[len] != '\0')
	{
		len++;
	}
	start_index = len / 2;

	if (len % 2 != 0)
	{
		start_index++;
	}
	for (i = start_index; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
