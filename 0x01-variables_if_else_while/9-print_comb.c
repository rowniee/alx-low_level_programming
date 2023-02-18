#include<stdio.h>
/**
 * main - beginning of my programme
 * printing all possible combination of single digits
 * Return: 0(Success)
 */
int main(void)
{
int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
