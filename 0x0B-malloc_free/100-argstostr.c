#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - all argument
 * @ac: number of arguments
 * @av: array arguments
 * Return: string or null
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	len = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0')
		{
		j++;
		len++;

		}
		len++;
		i++;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
