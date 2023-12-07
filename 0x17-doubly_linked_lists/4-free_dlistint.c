/*
* Task_number: No 4
* Task_Title: 4. Free list
* File_name: 4-free_dlistint.c
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
* free_dlistint - frees the dlistint_t list
*
* @head: head of the list
*
* Return: no return
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

if (head != NULL)

while (head->prev != NULL)

head = head->prev;

while ((tmp = head) != NULL)
{

head = head->next;

free(tmp);

}
}
