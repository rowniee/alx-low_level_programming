#include<stdio.h>
/**
 * main - beginning of my programme
 * prints alphabet in lowercase except q and e
 * Return: 0(Success)
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{ if
	(c == 'e' || c == 'q')
		continue;
	putchar(c);
	if (c == 'z')
		break;
}
putchar('\n');
return (0);
}
