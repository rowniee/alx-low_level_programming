#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * main - beginning of the function
 * print _putchar followed by new line
 * Return: 0(Success)
 */
int main(void)
{
int i;
char s[] = "_putchar\n";
int len = strlen(s);
for (i = 0 ; i < len ; i++)
{
	putchar (s[i]);
}
return (0);
}
