#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - Adds a new node at the beginning of a linked list.
  * @head: The original linked list.
  * @str: The new string to add in the node.
  *
  * Return: The address of the new element list or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
