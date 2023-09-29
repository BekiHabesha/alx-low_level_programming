/*
* File_name: main.h file
* Created: 29th of Septrmber, 2023
* Auth: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x14. C - Bit manipulation.
*/

#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: on success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
