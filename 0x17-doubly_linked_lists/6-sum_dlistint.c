/*
* Task_number: No 6
* Task_Title: 6. Sum list
* File_name: 6-sum_dlistint.c
*
* Created: On December 7, 2023
* Author: Bereket Dereje Mekonnen
*
* Project_Title: 0x17. C - Doubly linked lists
* GitHub_Repository: alx-low_level_programming
* Directory: 0x17-doubly_linked_lists
*/

#include "lists.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


/**
* sum_dlistint - returns the sum of all the
*            data(n) of a doubly linked list
*
* @head: head of the list
*
* Return: the sum of the data
*/

int sum_dlistint(dlistint_t *head)
{
int stotal;

stotal = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
stotal += head->n;
head = head->next;
}
}

return (stotal);
}
