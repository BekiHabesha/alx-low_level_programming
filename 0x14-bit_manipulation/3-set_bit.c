/*
* File_name: 3-set_bit.c file
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
* set_bit - The bit is set at a given index to 1
* @n: The pointer of the number to change
* @index: The index of the bit to set to 1
*
* Return: 1 for success, -1 for fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
