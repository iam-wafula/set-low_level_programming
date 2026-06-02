#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list safely (handles loops)
 * @h: pointer to pointer of head
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	listint_t *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		tmp = *h;
		next = tmp->next;
		free(tmp);
		count++;

		/* break loop detection by checking if next is already freed path */
		*h = next;

		/* safety stop: if we somehow loop back to freed memory */
		if (next == NULL)
			break;
	}

	*h = NULL;
	return (count);
}
