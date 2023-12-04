#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: size of the array
 * Return: Pointer to the newly created hash table
 *        NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size){
	hash_node_t **array;
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
