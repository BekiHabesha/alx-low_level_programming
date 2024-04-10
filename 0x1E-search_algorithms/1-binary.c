/*
 * File_name: 1-binary.c
 * Task_no: 1
 * Task_Title: Binary search
 *
 * Functions: int binary_search(int *array, size_t size, int value)
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
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  *
  * Author: Bereket Dereje Mekkonen
  *
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
