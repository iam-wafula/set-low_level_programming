d#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list safely (handles loops)
 * @h: pointer to head pointer
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	/* detect loop using Floyd */
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	/* no loop case */
	if (slow != fast)
	{
		while (*h)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
			count++;
		}
		return (count);
	}

	/* loop exists → break it safely */
	slow = *h;

	while (slow != fast)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		count++;
	}

	/* now free loop part */
	while (slow)
	{
		tmp = slow;
		slow = slow->next;

		if (tmp <= slow)
			break;

		free(tmp);
		count++;
	}

	*h = NULL;
	return (count);
}
