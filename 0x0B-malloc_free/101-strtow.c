#include <stdio.h>
#include <stdlib.h>
/**
 * count_word - function count word
 * @s: string
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - to strtow
 * @str: string
 * Return: pointer to an array of string
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, and;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (word == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp == (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				return (NULL);

				while (start < end)
					*tmp++ = str[start++];
						*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[x] = NULL;
	return (matrix);
}
