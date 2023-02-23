#include<stdio.h>
/**
 * main - beginning of my programme
 * prints numbers 1 to 100
 * multiples of three print Fizz, multiples of five print Buzz
 * both multiples of 3 and 5 FizzBuzz
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
