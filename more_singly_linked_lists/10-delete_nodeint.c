#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: pointer to pointer of head node
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	/* delete head */
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);

	return (1);
}
