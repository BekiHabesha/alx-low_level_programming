/*
* Task_number: No 1
* Task_Title: Under the snow
* File_name: 1-create_file.c
* Created: On October 30, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: alx-low_level_programming
* Project: 0x15. C - File I/O
* Directory: 0x15-file_io
*/

#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* create_file - The program that creates a file.
*
* @filename: A pointer to the name of the file to read.
*
* @text_content: The pointer content to a string to write in the file.
*
* Return: 1 if it success. -1 if it fails.
*/

int create_file(const char *filename, char *text_content)
{
int file_o;
int nlen;
int file_w;

if (!filename)
return (-1);

file_o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_o == -1)
return (-1);

if (!text_content)
text_content = "";

for (nlen = 0; text_content[nlen]; nlen++)
;

file_w = write(file_o, text_content, nlen);

if (file_w == -1)
return (-1);

close(file_o);

return (1);
}
