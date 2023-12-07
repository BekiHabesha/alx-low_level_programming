/*
* Task_number: No 2
* Task_Title: 2. Add node
* File_name: 2-add_dnodeint.c
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
* add_dnodeint - adds a new node at the
*          beginning of a dlistint_t list
*
* @head: head of the list
*
* @n: value of the element
*
* Return: the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
h = *head;

if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
new->next = h;

if (h != NULL)
h->prev = new;

*head = new;

return (new);
}
