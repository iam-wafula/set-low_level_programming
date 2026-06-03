#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: pointer to head
 *
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
