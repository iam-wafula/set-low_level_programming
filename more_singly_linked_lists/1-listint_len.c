#include "lists.h"

/**
 * listint_len - returns number of elements in a listint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
