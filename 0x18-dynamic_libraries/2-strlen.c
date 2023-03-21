#include "main.h"
/**
 * _strlen - function the return strnig
 * @s: string
 * Return: string
 */
int _strlen(char *s)
{
	int index;
	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
