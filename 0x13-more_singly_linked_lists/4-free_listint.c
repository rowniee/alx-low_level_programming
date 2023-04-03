#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of a list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (tmp != NULL)
	{
		tmp = head;
		head = head->next;
		free(head);
	}
}
