#include<stdio.h>
/**
 * main - beginning of my programme
 * prints the alphabet in lower case
 * Return: 0(Success)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
