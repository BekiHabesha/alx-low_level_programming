#include "main.h"

/**
* _strcat - Concatenates the two strings
* @dest: The string destination
* @src: The string source
* Return: dest;
*/

char *_strcat(char *dest, char *src)
{
int destlen;
int srclen;
int i;

destlen = 0;
srclen = 0;
i = 0;

for (i = 0 ; dest[i] != '\0' ; i++)
destlen++;

for (i = 0 ; src[i] != '\0' ; i++)
srclen++;

for (i = 0 ; i <= srclen ; i++)
dest[destlen + i] = src[i];

return (dest);
}

