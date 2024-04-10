/*
 * File_name: 104-advanced_binary.c
 * Task_no: 11
 * Task_Title: Advanced binary search
 *
 * Functions: int advanced_binary(int *array, size_t size,
 *                                int value);
 *          : int rec_search(int *array, size_t size,
 *                           int value)
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
 * rec_search - searches for a value in an array of
 *              integers using the Binary search algorithm
 *
 * Author: Bereket Dereje Mekkonen
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */

int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}


/**
 * advanced_binary - calls to rec_search to return
 *                   the index of the number
 *
 * Author: Bereket Dereje Mekkonen
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
