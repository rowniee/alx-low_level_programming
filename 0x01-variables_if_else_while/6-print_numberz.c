#include<stdio.h>
/**
 * main - beginning of the programme
 * print single digits using putchar
 * Return: 0(Success)
 */
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
	putchar (n + '0');
}
putchar ('\n');
return (0);
}
