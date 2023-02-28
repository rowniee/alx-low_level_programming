#include "main.h"
#include<stdio.h>
/**
 * rev_string - reverses astring
 * @s: string to be reversed
 * Return: nothung
 */
void rev_string(char *s)
{
	int len;
	int i, j;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0 , j = len -1 ; i < j ; i++ , j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	putchar (s[i]);
}
