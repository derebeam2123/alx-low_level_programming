#include "hash_tables.h"
/**
 * key_index - function
 * @key: the key index
 * @size: size of hash table
 * Return: index
 */
nsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
