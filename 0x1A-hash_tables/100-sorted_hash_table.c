#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: size of the array
 * Return: Pointer to the newly created hash table
 *        NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_node_t **array;
	shash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = array;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}


/**
 * shash_insert_sort - insert node into sorted linked list
 * @ht: hash table
 * @node: node to insert
 * @key: key to get index
 * Return: NONE
 */
void shash_insert_sort(shash_table_t *ht, shash_node_t *node, const char *key)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
		return;
	}
	tmp = ht->shead;
	while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
		tmp = tmp->snext;

	if (tmp->snext == NULL)
	{
		node->sprev = tmp;
		node->snext = NULL;
		tmp->snext = node;
		ht->stail = node;
	}
	else if (tmp->sprev == NULL)
	{
		node->sprev = NULL;
		node->snext = tmp;
		tmp->sprev = node;
		ht->shead = node;
	}
	else
	{
		node->sprev = tmp->sprev;
		node->snext = tmp;
		tmp->sprev->snext = node;
		tmp->sprev = node;
	}
}

/**
 * shash_table_set - add element to hash table associated with a key (sorted)
 * @ht: hash table
 * @key: key to get index
 * @value: value to set
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	shash_node_t *node;

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
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	/* insert node into sorted linked list */
	shash_insert_sort(ht, node, key);

	return (1);
}


/**
 * shash_table_get - get value from hash table associated with a key
 * @ht: hash table
 * @key: key to get index
 * Return: value associated with the element, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long index;
	shash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}


/**
 * shash_table_print - print hash table in order
 * @ht: hash table
 * Return: NONE
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = ht->shead;
	int first_item_to_print;

	if (ht == NULL || ht->array == NULL)
		return;

	first_item_to_print = 1;
	printf("{");
	while (node != NULL)
	{
		if (!first_item_to_print)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		first_item_to_print = 0;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print hash table in reverse order
 * @ht: hash table
 * Return: NONE
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = ht->stail;
	int first_item_to_print;

	if (ht == NULL || ht->array == NULL)
		return;

	first_item_to_print = 1;
	printf("{");
	while (node != NULL)
	{
		if (!first_item_to_print)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		first_item_to_print = 0;
	}
	printf("}\n");
}


/**
 * shash_table_delete - delete hash table
 * @ht: hash table
 * Return: NONE
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
