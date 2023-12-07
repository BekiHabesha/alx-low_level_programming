/*
* Task_number: No 5
* Task_Title: 5. Get node at index
* File_name: 5-get_dnodeint.c
*
* Created: On December 7, 2023
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
* get_dnodeint_at_index - returns the nth node of
*                         a dlistint_t linked list
*
* @head: head of the list
*
* @index: index of the nth node
*
* Return: the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int b;


if (head == NULL)
return (NULL);


while (head->prev != NULL)
head = head->prev;

b = 0;


while (head != NULL)
{
if (b == index)
break;

head = head->next;

b++;
}

return (head);
}
