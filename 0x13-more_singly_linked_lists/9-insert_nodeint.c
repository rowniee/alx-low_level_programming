#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to a head of a list
 * @idx: index of the list where the new node should be added
 * @n: value to be added
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
