#include "main.h"

/**
* rot13 - encode string using the rot13 encoding scheme
* @s: string to be encoded
* Return: encoded string
*/

char *rot13(char *s)
{
int f, k;
char *a;
char *e;

a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
e = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (f = 0 ; s[f] != '\0'; f++)
{
for (k = 0 ; a[k] != '\0'; k++)
{
if (s[f] == a[k])
{
s[f] = e[k];
break;
}
}
}
return (s);
}
