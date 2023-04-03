#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	new  = *head;
	data = new->n;
	*head = new->next;
	free(new);

	return (data);
}
