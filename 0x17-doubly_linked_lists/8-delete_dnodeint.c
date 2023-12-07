/*
* Task_number: No 8
* Task_Title: 8. Delete at index
* File_name: 8-delete_dnodeint.c
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
* delete_dnodeint_at_index - deletes the node at index
*                           of a dlistint_t linked list
*
* @head: head of the list
*
* @index: index of the new node
*
* Return: 1 if it succeeded,
*        -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd;
	dlistint_t *he;
	unsigned int b;

	hd = *head;

	if (hd != NULL)
		while (hd->prev != NULL)
			hd = hd->prev;

	b = 0;

	while (hd != NULL)
	{
		if (b == index)
		{
			if (b == 0)
			{
				*head = hd->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				he->next = hd->next;

				if (hd->next != NULL)
					hd->next->prev = he;
			}

			free(hd);
			return (1);
		}
		he = hd;
		hd = hd->next;
		b++;
	}

	return (-1);
}
