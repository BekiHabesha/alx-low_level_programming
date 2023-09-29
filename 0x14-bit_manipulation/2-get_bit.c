/*
* File_name: 2-get_bit.c file
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
 * get_bit -The value of bit is returned at an index in a decimal number
 * @n: The number to search
 * @index: The index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bek_der;

if (index > 63)
return (-1);

bek_der = (n >> index) & 1;

return (bek_der);
}
