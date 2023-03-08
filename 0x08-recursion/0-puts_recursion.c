#include "main.h"
/**
 * _puts_recursion - beginning of the programme
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
