#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - The function converts a binary number to an unsigned int.
* @b: The pointer to a string containing a binary number
*
* Return: unsigned int with decimal value of binary number, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
int d;
unsigned int bek;

bek = 0;
if (!b)
return (0);
for (d = 0; b[d] != '\0'; d++)
{
if (b[d] != '0' && b[d] != '1')
return (0);
}
for (d = 0; b[d] != '\0'; d++)
{
bek <<= 1;
if (b[d] == '1')
bek += 1;
}

return (bek);
}
