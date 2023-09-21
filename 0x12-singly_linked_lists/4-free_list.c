#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Frees a linked list
  * @head: Head of the list_t list to be freed.
  * Return: no return.
  */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
