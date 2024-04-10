/*
 * File_name: 105-jump_list.c
 * Task_no: 12
 * Task_Title: Jump search in a singly linked list
 *
 * Functions: listint_t *jump_list(listint_t *list, size_t size,
 *                                 int value);
 *          : int _binary_search(int *array, size_t left,
 *                               size_t right, int value)
 * Created: On April 10, 2024
 * Author: Bereket Dereje Mekkonen
 * Student ID: 159650
 *
 * GitHub repository: alx-low_level_programming
 * Project Title: 0x1E. C - Search Algorithms
 * Directory: 0x1E-search_algorithms
 *
 * Curriculum: ALX SE Foundations
 * Chohort: 19
 * Program: Full Stack Software Engineering | Founder Academy
 */

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 *             integers using the Jump search algorithm
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @list: input list
 *
 * @size: size of the array
 *
 * @value: value to search in
 *
 * Return: index of the number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		prev = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
