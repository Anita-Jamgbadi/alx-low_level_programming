#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: destination
 * @key: key
 * @value: value (must be duplicated)
 * Return: 1 on success and 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index;

	/* Check if the key or hash table is NULL */
	if (key == NULL || ht == NULL)
		return (0);

	/* Get the index of the key in the array of the hash table */
	index = key_index((unsigned char *) key, ht->size);

	/* Check if a node with the same key already exists in the list */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* Update the value associated with the key */
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Add the new node to the beginning of the list */
	new_node->next = ht->array[index];
	new_node->next = ht->array[index];
	return (1);
}
