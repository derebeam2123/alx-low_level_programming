#include "main.h"
/**
 * _strlen_recursion - return the length of string.
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
