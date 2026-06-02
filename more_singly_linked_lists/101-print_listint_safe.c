#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t list safely (handles loops)
 * @head: pointer to list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *runner;
	size_t count = 0;

	current = head;

	while (current != NULL)
	{
		runner = head;

		/* check if current node was seen before */
		while (runner < current)
		{
			if (runner == current)
				break;
			runner = runner->next;
		}

		/* loop detected */
		if (runner != current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (count);
		}

		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	return (count);
}
