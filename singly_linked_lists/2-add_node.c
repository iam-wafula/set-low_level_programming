#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of head node
 * @str: string to duplicate and store
 *
 * Return: address of new node, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    unsigned int len = 0;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    if (str == NULL)
        new->str = NULL;
    else
    {
        new->str = strdup(str);
        if (new->str == NULL)
        {
            free(new);
            return (NULL);
        }
    }

    while (str && str[len])
        len++;

    new->len = len;
    new->next = *head;

    *head = new;

    return (new);
}
