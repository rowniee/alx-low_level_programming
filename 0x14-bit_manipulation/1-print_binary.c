#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_binary(n >> 1);
	_putchar((n + 1) + '0');
}
