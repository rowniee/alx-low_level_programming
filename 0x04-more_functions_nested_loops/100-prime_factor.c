#include<stdio.h>
/**
 * main - start of the programme
 * finds and prints the largest prime factors
 * Return: 0(Success)
 */
int main(void)
{
	long num = 612852475143;
	long fact = 2;
	long largest_fact;

	while (num != 0)
	{
		if (num % fact != 0)
		{
			fact++;
		}
		else
		{
			largest_fact = num;
			num = num / fact;
			if (num == 1)
			{
				printf("%ld\n", largest_fact);
				break;
			}
		}
	}
	return (0);
}
