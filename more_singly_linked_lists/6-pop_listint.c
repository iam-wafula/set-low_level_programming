#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: address of head pointer
 *
 * Return: head node data, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	value = temp->n;

	*head = temp->next;
	free(temp);

	return (value);
}
