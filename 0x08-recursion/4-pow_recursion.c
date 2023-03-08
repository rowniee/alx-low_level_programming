#include "main.h"
/**
 * _pow_recursion - returns the power of two numbers
 * @x: integer to be raised
 * @y: number of times to be raised
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
