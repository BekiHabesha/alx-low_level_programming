/*
* Task_number: No 11
* Task_Title: 2. Add node
* File_name: 103-keygen.c
*
* Created: On December 9, 2023
* Author: Bereket Dereje Mekonnen
*
* Project_Title: 0x17. C - Doubly linked lists
* GitHub_Repository: alx-low_level_programming
* Directory: 0x17-doubly_linked_lists
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* f4 - it finds the biggest number
*
* @usrn: The user name
*
* @len: The length of the user name
*
* Return: The biggest number
*/

int f4(char *usrn, int len)
{
	int name;
	int snd;
	unsigned int trial;

	name = *usrn;
	snd = 0;

	while (snd < len)
	{
		if (name < usrn[snd])
			name = usrn[snd];
		snd += 1;
	}

	srand(name ^ 14);
	trial = rand();

	return (trial & 63);
}

/**
* f5 - It multiplies each char of username
*
* @usrn: The user name
*
* @len: The length of the user name
*
* Return: multiplied char
*/

int f5(char *usrn, int len)
{
	int name;
	int snd;

	name = snd = 0;

	while (snd < len)
	{
		name = name + usrn[snd] * usrn[snd];
		snd += 1;
	}

	return (((unsigned int)name ^ 239) & 63);
}

/**
* f6 - It generates a random char
*
* @usrn: The user name
*
* Return: a random char
*/

int f6(char *usrn)
{
	int name;
	int snd;

	name = snd = 0;

	while (snd < *usrn)
	{
		name = rand();
		snd += 1;
	}

	return (((unsigned int)name ^ 229) & 63);
}

/**
* main - Entry point
*
* @argc: The arguments count
*
* @argv: The arguments vector
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
	char keygen[7];
	int len, name, snd;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	name = snd = 0;
	while (snd < len)
	{
		name = name + argv[1][snd];
		snd = snd + 1;
	}
	keygen[1] = ((char *)alph)[(name ^ 79) & 63];
	/* ----------- f3 ----------- */
	name = 1;
	snd = 0;
	while (snd < len)
	{
		name = argv[1][snd] * name;
		snd = snd + 1;
	}
	keygen[2] = ((char *)alph)[(name ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (name = 0; keygen[name]; name++)
		printf("%c", keygen[name]);
	return (0);
}
