#include "lists.h"
#include <stdio.h>

/**
  * listint_len - Count and returns the number of elements
  *               in a linked listint_t list.
  *
  * @h: The head pointer of the linked listint_t list.
  *
  * Return: The number of elements in the linked listint_t list.
  */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
