/*
* File_name: 4-hash_table_get.c
* Function Prototype: char *hash_table_get
* Created: On December 22, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x1A. C - Hash tables
* Directory: 0x1A-hash_tables
*/

#include "hash_tables.h"

/**
 * hash_table_get - It Retrieve the value associated
 *                   with a key in a hash table.
 *
 * @ht: A pointer to the hash table.
 *
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *       Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
