/*
* File_name: 4-clear_bit.c file
* Created: 29th of Septrmber, 2023
* Auth: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x14. C - Bit manipulation
* Directory: 0x14-bit_manipulation.
*/

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* clear_bit - The value is set of a given bit to 0
* @n: The pointer to the number to change
* @index: The index of the bit to clear
*
* Return: 1 for success, -1 for fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
