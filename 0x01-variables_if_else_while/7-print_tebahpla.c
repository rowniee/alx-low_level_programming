#include<stdio.h>
/**
 * main - beginning of the programme
 * printing lowercase alphabet in reverse
 * Return: 0(Success)
 */
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');

return (0);
}
