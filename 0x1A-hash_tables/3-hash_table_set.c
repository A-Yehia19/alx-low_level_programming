#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table associated with a key
 * @ht: hash table
 * @key: key to get index
 * @value: value to set
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value){
	unsigned long index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* search for existing node */
	/* if node exists, update value */
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	/* if node does not exist, create new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
