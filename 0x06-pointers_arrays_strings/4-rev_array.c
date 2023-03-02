#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: integers ti be reversed
 * @n: number of elements in the arrayReturn: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
