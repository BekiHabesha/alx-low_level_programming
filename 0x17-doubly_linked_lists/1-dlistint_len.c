/*
* Task_number: No 1
* Task_Title: 1. List length
* File_name: 1-dlistint_len.c
*
* Created: On December 9, 2023
* Author: Bereket Dereje Mekonnen
*
* Project_Title: 0x17. C - Doubly linked lists
* GitHub_Repository: alx-low_level_programming
* Directory: 0x17-doubly_linked_lists
*/

#include "lists.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


/**
* dlistint_len - returns the number of elements
*                in a double linked list
*
* @h: head of the list
*
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
int nnode;

nnode = 0;

if (h == NULL)
return (nnode);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
nnode++;
h = h->next;
}

return (nnode);
}
