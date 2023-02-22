#include "main.h"
/**
 * times_table - prints the 9 times timetable
 * Return: Nothing
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c <= 9; c++)
		{
			p = r * c;
			if (c == 0)
			{
				_putchar ('0');
			}
			else if (p < 10)
			{
				_putchar (' ');
				_putchar (p + '0');
			}
			else
			{
				_putchar (p / 10 + '0');
				_putchar (p % 10 + '0');
			}
			if (c < 9)
			{
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				_putchar ('\n');
			}
		}
	}
}
