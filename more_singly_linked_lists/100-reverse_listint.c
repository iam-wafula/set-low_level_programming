#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer of head node
 *
 * Return: new head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (prev);
}
