#include "hash_tables.h"
#include <stdio.h>

/**
 * main - Test hash table implementation
 *
 * Return: Always 0
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);

	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	value = hash_table_get(ht, "python");
	printf("python:%s\n", value);

	value = hash_table_get(ht, "Bob");
	printf("Bob:%s\n", value);

	value = hash_table_get(ht, "N");
	printf("N:%s\n", value);

	value = hash_table_get(ht, "Asterix");
	printf("Asterix:%s\n", value);

	value = hash_table_get(ht, "Betty");
	printf("Betty:%s\n", value);

	value = hash_table_get(ht, "98");
	printf("98:%s\n", value);

	value = hash_table_get(ht, "c");
	printf("c:%s\n", value);

	value = hash_table_get(ht, "javascript");
	printf("javascript:%s\n", value);

	hash_table_print(ht);

	hash_table_delete(ht);

	return (0);
}
