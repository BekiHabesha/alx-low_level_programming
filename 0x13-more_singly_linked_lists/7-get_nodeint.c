#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - Retreive and returns the node at
  *                        a certain index in a linked list.
  *
  * @head: The pointer to the first node element in the linked list.
  *
  * @index: The node desired position index of the node
  *         to retrieve and to return.
  *
  * Return: Pointer to the retrieved node, or NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
