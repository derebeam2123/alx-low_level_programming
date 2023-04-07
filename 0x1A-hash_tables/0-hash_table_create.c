#include "hash_tables.h"
/**
 * hash_table_creat - to creat hash table
 * @size: size of nodes for make new hash table
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;
	if (size <= 0)
		return (NULL);
	
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (idx < size)
		table->array[idx++] = NULL;
	return (table);
}
