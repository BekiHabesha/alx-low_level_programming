/*
* File_name: 1-print_binary.c file
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
* print_binary -The binary prints equivalent of decimal number
* @n: The number to print in binary
*/
void print_binary(unsigned long int n)
{
int c, bek = 0;
unsigned long int der;

for (c = 63; c >= 0; c--)
{
der = n >> c;

if (der & 1)
{
_putchar('1');
bek++;
}
else if (bek)
_putchar('0');
}
if (!bek)
_putchar('0');
}
