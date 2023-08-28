#include "main.h"

/**
* _memset - The entry point
* @s: The pointed destination
* @b: The constant byte
* @n: Bytes of the memory area
* Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
s[i] = b;
return (s);
}
