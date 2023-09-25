#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - Deletes the firist head node of
  *             a linked list and return its data
  *
  * @head: The pointer to the firist element in the linked list
  *
  * Return: The int data inside the elements that was deleted,
  *         or 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
