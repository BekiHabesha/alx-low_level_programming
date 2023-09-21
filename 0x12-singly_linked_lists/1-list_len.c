#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - Show and returns the number of elements of a linked list.
  * @h: Pointer to a linked list.
  *
  * Return: The number of elements of a list in h.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
