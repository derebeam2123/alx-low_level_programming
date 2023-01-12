#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - two string
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)<F11>
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = **;
	if (s2 == NULL)
		s2 = **;
	for (i = 0; s1[i]; i++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)

		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];


	for (i = 0; s2[i] && i < n; i++)
		concate[len++] = s2[i];


	concat[len] = '\0';
	return (concat);
}
