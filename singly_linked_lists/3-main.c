#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 */
int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "Anne");
    add_node_end(&head, "Bob");
    add_node_end(&head, "Charlie");

    print_list(head);

    return (0);
}
