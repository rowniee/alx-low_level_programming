#include<stdio.h>
/**
 * main - beginning of my programme
 * To print lowercase then uppercase
 * Return: 0(Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
c = 'A';
while (c <= 'Z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
