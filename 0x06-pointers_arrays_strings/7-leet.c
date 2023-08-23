#include "main.h"

/**
* leet - a function that encodes a string into 1337.
* using the leet encoding
* @s: The string to be encoded
* Return: encoded string
*/

char *leet(char *s)
{
int i, j;
char *a;
char *b;

a = "aAeEoOtTlL";
b = "4433007711";

for (i = 0 ; s[i] != '\0'; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (s[i] == a[j])
s[i] = b[j];
}
}
return (s);
}
