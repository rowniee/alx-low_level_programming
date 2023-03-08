#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number to be checked for factorial
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
