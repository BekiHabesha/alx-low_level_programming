/*
* Task_number: No 2
* Task_Title: Speak gently, she can hear
* File_name: 2-append_text_to_file.c
* Created: 2nd of October, 2023
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
* append_text_to_file - appends text at the end of a file
*
* @filename: A pointer to the name of the file.
*
* @text_content: The string added content to the end of the file.
*
* Return: 1 if the file exist.
*        -1 if the file does not exist
*         or if it fails.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int file_o;
int nlen;
int file_w;

if (!filename)
return (-1);

file_o = open(filename, O_WRONLY | O_APPEND);

if (file_o == -1)
return (-1);

if (text_content)
{
for (nlen = 0; text_content[nlen]; nlen++)
;

file_w = write(file_o, text_content, nlen);

if (file_w == -1)
return (-1);
}

close(file_o);

return (1);
}
