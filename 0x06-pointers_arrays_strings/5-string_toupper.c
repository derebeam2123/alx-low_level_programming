#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercas,
 *
 * @ch: pointer to char
 * Return: char
 */

char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')


	{
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
		*(ch + i) -= 32;
		i++;
	}
	return (ch);

}
