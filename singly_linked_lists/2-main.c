#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 */
int main(void)
{
    list_t *head;

    head = NULL;

    add_node(&head, "Alex");
    add_node(&head, "Bob");
    add_node(&head, "Charlie");

    print_list(head);

    return (0);
}
