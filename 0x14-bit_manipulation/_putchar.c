#include "main.h"
#include <unistd.h>
/**
 * _putchar - the character
 * @c: the characer to print
 * Return: ON SUCCESS 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
