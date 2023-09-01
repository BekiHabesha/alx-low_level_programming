#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the minimum number of args positive number of coins to
  * make change for an amount of money
  * @argc: The number of arguments supplied to the program
  * @argv: An array of pointers to the arguments
  *
  * Return: If the number of arguments is not exactly 1.
  * otherwise 0.
  */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
				return (1);
				}

				cents = atoi(argv[1]);

				while (cents > 0)
				{
				coins++;
				if ((coins - 25) >= 0)
				{
				coins -= 25;
				continue;
				}
				if ((coins - 10) >= 0)
				{
				coins -= 10;
				continue;
				}
				if ((coins - 5) >= 0)
				{
					coins -= 5;
					continue;
				}
				if ((coins - 2) >= 0)
				{
					coins -= 2;
					continue;
				}
				cents--;
				}

		printf("%d\n", cents);

		return (0);
}
