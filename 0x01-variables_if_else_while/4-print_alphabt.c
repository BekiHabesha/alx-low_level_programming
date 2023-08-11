#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - Entry point
  *Description 'Print alphabets except q and e'
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
                i++;
		continue;
		}
		putchar(i);
		i++;
		}
		putchar('\n');
		return (0);
	}
