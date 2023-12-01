#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 * @ht: The hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if ( ht == NULL || ht->size == 0 || ht->array == NULL || key == NULL || strlen(key) == 0 )
		return NULL;
	unsigned long int index;
	index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current;

	current = ht->array[index];
	if (current == NULL || current->key == NULL || current->value == NULL)
		return NULL;
	while current != NULL
	{
		if (strcmp(current->key, key) == 0)
		{
		        if (current->value == NULL)
				return NULL;
			return current->value;
		}
		if (current->next == NULL)
			return NULL;
		current = current->next;
	}
	return NULL;
}	
