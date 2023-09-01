#include "main.h"
#include <stdio.h>

/**
  * main - prints all the arguments content
  * @argc: count argument number
  * @argv: array of argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
		return (0);
}
