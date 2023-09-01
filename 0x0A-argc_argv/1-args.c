#include "main.h"
#include <stdio.h>

/**
  * main - prints the number of arguments
  * @argc: count argument number
  * @argv: array of argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
