#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - Calculates the sum up of all the data of
  *               a linked listint_t list.
  *
  * @head: Pointer to the first node in the linked list
  *
  * Return: The resulting sum.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
