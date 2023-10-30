/*
* Task_number: No 0
* Task_Title: Tread lightly, she is near
* File_name: 0-read_textfile.c
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
* read_textfile - Reads a text file and prints it to POSIX STDOUT.
*
* @filename: A pointer to the name of the file to read.
*
* @letters: The number of letters the function,
*           it should read and print.
*
* Return: If the function fails or filename is NULL - 0.
*   O/w - the actual number of bytes the function can read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file_o;
ssize_t file_r;
ssize_t file_w;


if (filename == NULL)
return (0);
file_o = open(filename, O_RDONLY);

buffer = malloc(sizeof(char) * letters);
if (buffer ==  NULL)
return (0);

file_r = read(file_o, buffer, letters);
file_w = write(STDOUT_FILENO, buffer, file_r);

if (file_o == -1 || file_r == -1 || file_w == -1 || file_w != file_r)
{
free(buffer);
return (0);
}

free(buffer);
close(file_o);

return (file_w);

}
