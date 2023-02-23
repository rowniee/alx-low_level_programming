#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9
 * except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		if ((c == 2) || (c == 4))
			continue;
		_putchar (c + '0');
	}
	_putchar ('\n');
}
