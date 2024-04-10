/*
 * File_name: 0-linear.c
 * Task_no: 0
 * Task_Title: Linear search
 *
 * Functions: int linear_search(int *array, size_t size, int value)
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
 * linear_search - searches for a value in an array of integers
 *                 using the Linear search algorithm
 *
 * Author: Bereket Dereje
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
