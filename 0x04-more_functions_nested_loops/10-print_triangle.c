#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size - i ; j++)
		{
			_putchar (' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
