#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the head of a lis
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
