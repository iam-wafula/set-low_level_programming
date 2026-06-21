#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node
 *
 * Return: address of node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	/* Step 1: detect loop */
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	/* no loop */
	if (fast == NULL || fast->next == NULL)
		return (NULL);

	/* Step 2: find loop start */
	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}
