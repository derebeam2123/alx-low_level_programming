#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - adds positive numbers
 * @str: argument count
 *
 * Return: 0 and 1,
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
