/*
* Task_number: No 7
* Task_Title: 7. Insert at index
* File_name: 7-insert_dnodeint.c,
*          : 2-add_dnodeint.c,
*          : 3-add_dnodeint_end.c
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
* insert_dnodeint_at_index - inserts a new node
*                           at a given position
*
* @h: head of the list
*
* @idx: index of the new node
*
* @n: value of the new node
*
* Return: the address of the new node,
*         or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new);
}
