/*
* File_name: 6-hash_table_delete.c
* Function Prototype: void hash_table_delete
* Created: On December 22, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x1A. C - Hash tables
* Directory: 0x1A-hash_tables
*/

#include "hash_tables.h"

/**
 * hash_table_delete - It Deletes a hash table.
 *
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
