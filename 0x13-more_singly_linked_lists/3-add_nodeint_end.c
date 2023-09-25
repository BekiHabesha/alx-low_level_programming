#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint_end - Adds a new node at the end of
  *                   the linked listint_t list.
  *
  * @head: The pointer pointing to the address of the
  *        head of the linked listint_t list.
  *
  * @n: The integer data added to the new node to contain.
  *
  * Return: If the function fails - NULL.
  *         otherwise - the address of the new element.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
