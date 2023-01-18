#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name
 * @f: print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
