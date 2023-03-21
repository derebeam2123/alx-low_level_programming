#include "main.h"

/**
 * _strstr - string
 * @haystack: input string
 * @needle: This string
 * Return: NUll
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	while (*haystack)
	{
		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
