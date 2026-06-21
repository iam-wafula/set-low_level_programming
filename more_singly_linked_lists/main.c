#include "lists.h"
#include <stdio.h>

/**
 * main - test sum_listint
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head = NULL;
	int sum;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);

	sum = sum_listint(head);
	printf("sum = %d\n", sum);

	return (0);
}
