/*
* Task_number: No 3
* Task_Title: cp
* File_name: 3-cp.c
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

int main(int argc, char *argv[]);
void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
* main - The function that copies the contents of
*        one file to another file.
*
* @argc: The number count of arguments supplied to the program.
*
* @argv: An array of pointers that the arguments passed.
*
* Return: 1 on success, exit otherwise.
*
* Description: If the argument count is incorrect - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*              If file_to cannot be created or written to - exit code 99.
*              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int src, dest, n_read = 1024, wrote, close_src, close_dest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
check_IO_stat(src, -1, argv[1], 'O');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
check_IO_stat(dest, -1, argv[2], 'W');

while (n_read == 1024)
{
n_read = read(src, buffer, sizeof(buffer));
if (n_read == -1)
check_IO_stat(-1, -1, argv[1], 'O');
wrote = write(dest, buffer, n_read);
if (wrote == -1)
check_IO_stat(-1, -1, argv[2], 'W');
}
close_src = close(src);
check_IO_stat(close_src, src, NULL, 'C');
close_dest = close(dest);
check_IO_stat(close_dest, dest, NULL, 'C');
return (0);
}

/**
* check_IO_stat - funct checks if a file can be opened or closed
* @stat: file descriptor of file to be opened.
* @filename: A pointer to the name of the file.
* @mode: closing or opening.
* @fd: file descriptor.
*
*Return: void
*
* Description: If the argument count is incorrect - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*              If file_to cannot be created or written to - exit code 99.
*              If file_to or file_from cannot be closed - exit code 100.
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
