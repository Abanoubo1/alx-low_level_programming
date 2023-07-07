#include "hash_tables.h"

/**
 * hash_table_create - creates a ha table.
 * @size:  of the hash table array
 * Return: a pointer to the newerl created hash table or NULL otherwise.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *data_table = NULL;
	unsigned long int pos = 0;

	data_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (data_table == NULL)
		return (NULL);

	data_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (data_table->array == NULL)
	{
		free(data_table);
		return (NULL);
	}

	data_table->size = size;

	while (pos < data_table->size)
	{
		data_table->array[pos] = NULL;
		pos++;
	}

	return (data_table);
}
