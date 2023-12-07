/*
* Task_number: No 3
* Task_Title: 3. Add node at the end
* File_name: 3-add_dnodeint_end.c
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
* add_dnodeint_end - adds a new node at the
*                   end of a dlistint_t list
*
* @head: head of the list
*
* @n: value of the element
*
* Return: the address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

h = *head;

if (h != NULL)
{

while (h->next != NULL)
h = h->next;
h->next = new;

}
else
{

*head = new;

}

new->prev = h;

return (new);
}
