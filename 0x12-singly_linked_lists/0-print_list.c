#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - Prints all the elements of a linked list.
  * @h: Pointer to the list_t list to print.
  *
  * Return: The number of nodes in h to printed.
  */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
