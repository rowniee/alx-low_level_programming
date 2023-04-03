#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of a list
 * @n: integer value to store the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}

