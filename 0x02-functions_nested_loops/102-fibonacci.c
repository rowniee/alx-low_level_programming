#include<stdio.h>
/**
 * main - start of the programme
 * to print the first 50 fibonacci numbers
 * Return: 0(Success)
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);
	for (i = 3 ; i <= 50 ; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
