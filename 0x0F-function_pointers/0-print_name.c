#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints name
* @name: name to print
* @f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
printf("Hello, my name is %s\n", name);
return;
f(name);
}
