#include "main.h"
/**
 * is_prime_number - returns prime numbeers
 * @n: number to be checked
 * Return: integer
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2 ; i * i <= n ; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
