#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - A function that frees a linked
  * listint_t list.
  *
  * @head: A pointer to the first head node of the
  * linked listint_t list to be freed.
  *
  * Return: no return.
  * Description: Sets the head to NULL.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
