/*
* File_name: 5-flip_bits.c file
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
* flip_bits -The number count bits to change
*            to get from one number to another
* @n: The first number
* @m: The second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int b;
int bek = 0;
unsigned long int der;
unsigned long int mek = n ^ m;

for (b = 63; b >= 0; b--)
{
der = mek >> b;
if (der & 1)
bek++;
}

return (bek);
}
