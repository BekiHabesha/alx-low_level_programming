#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint - Adds new node at the beginning
  *               of the linked listint_t list.
  *
  * @head: A pointer to the address of the
  *        head of the linked listint_t list.
  * which the head points to the first node.
  *
  * @n: The new integer for the new node to create.
  *
  * Return: If the function fails - NULL.
  *         otherwise - the address of the new element.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
