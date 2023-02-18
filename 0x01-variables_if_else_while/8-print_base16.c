#include<stdio.h>
/**
 * main - beginning of my programme
 * printing all numbers in base 16 in lowercase
 * Return: 0(Success)
 */
int main(void)
{
int i;
for (i = 0 ; i < 16 ; i++)
{
	if
		(i < 10)
			putchar(i + '0');
	else
		putchar(i - 10 + 'a');
}
putchar('\n');

return (0);
}
