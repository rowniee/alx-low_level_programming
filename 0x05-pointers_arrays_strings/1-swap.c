#include "main.h"
/**
 * swap_int - beginning of the programme
 * @a: integer to be swapped
 * @b: integr to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
