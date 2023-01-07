#include "main.h"

 /**
  * _puts - write a function that print string, followed by new line, to stdout
  *@str: string
  * Return: 0.
  */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
	_putchar(str[index]);
}
	_putchar('\n');
}
