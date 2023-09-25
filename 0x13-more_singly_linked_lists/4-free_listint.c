#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - A function that frees a linked
  * listint_t list.
  *
  * @head: A pointer to the first head node of the
  * linked listint_t list to be freed.
  *
  * Return: no return.
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
