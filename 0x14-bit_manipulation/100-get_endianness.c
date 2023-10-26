/*
* File_name: 100-get_endianness.c file
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
* get_endianness - The machine is checked if its little or big endian
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int d = 1;
char *e = (char *) &d;

return (*e);
}
