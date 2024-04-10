/*
 * File_name: 106-linear_skip.c
 * Task_no: 13
 * Task_Title: Linear search in a skip list
 *
 * Functions: int exponential_search(int *array, size_t size,
 *                                   int value);
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

/**
 * linear_skip - searches for a value in a skip list
 *
 * Author: Bereket Dereje Mekkonen
 *
 * @list: input list
 * @value: value to search in
 *
 * Return: index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);

	go = list;

	do {
		list = go;
		go = go->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go->index, go->n);
	} while (go->express && go->n < value);

	if (go->express == NULL)
	{
		list = go;
		while (go->next)
			go = go->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

	while (list != go->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
