/*
* File_name: 2-key_index.c
* Function Prototype: unsigned long int key_index
* Created: On December 23, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x1A. C - Hash tables
* Directory: 0x1A-hash_tables
*/

#include "hash_tables.h"

/**
 * key_index - It Gets the index at which a key/value
 *             pair should be stored in array of
 *              a hash table.
 *
 * @key: The key to get the index of.
 *
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
