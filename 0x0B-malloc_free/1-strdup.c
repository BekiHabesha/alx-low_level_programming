#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - Duplicate a string to new memory
  * @str: the string char to duplicate
  *
  * Return: the string duplicate.
  */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == 0)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == 0)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
