#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: This is my input string
 *
 * Return: length of the string
 */
int _strlen(char *s);
{
	int index;
	for (index = 0; s[index] != '\0' ; index++);
	return (index);
}
