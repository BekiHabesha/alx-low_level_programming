#include "main.h"

/**
* reverse_array - The reverse array of integers
* @a: an array
* @n: The number of elements of an array
* return: void
*/
void reverse_array(int *a, int n)
{
int i;
int t;

for (i = 0 ; i < n-- ; i++)
{
t = a[i];

a[i] = a[n];

a[n] = t;
}
}
