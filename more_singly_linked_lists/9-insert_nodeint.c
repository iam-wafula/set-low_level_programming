#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of head node
 * @idx: index where new node is added (0-based)
 * @n: value to store in new node
 *
 * Return: address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head,
				    unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* insert at head (idx = 0) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	/* move to node before target position */
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	/* if index is out of range */
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
