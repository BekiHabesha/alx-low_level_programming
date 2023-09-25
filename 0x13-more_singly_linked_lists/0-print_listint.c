#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Prints all the int data elements of
  * a linked listint_t list.
  *
  * @h: The head pointer to the linked listint_t list.
  *
  * Return: The number of nodes in the linked listint_t list.
  */
size_t print_listint(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
