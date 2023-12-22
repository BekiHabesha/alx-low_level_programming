/*
* File_name: 1-djb2.c
* Function Prototype: unsigned long int hash_djb2
* Created: On December 22, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x1A. C - Hash tables
* Directory: 0x1A-hash_tables
*/

#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function implementing the djb2 algorithm.
 *
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
