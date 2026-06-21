#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	/* Check if key already exists → update value */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);

			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* Create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;

	/* Insert at beginning (collision handling) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
