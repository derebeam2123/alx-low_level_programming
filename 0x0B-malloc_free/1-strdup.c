#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - string given
 * @str: string
 * Return: null or success
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, len;

i = 0;
len = 0;

if (str == NULL)
return (NULL);
while (str[len])
len++;
duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);
while ((duplicate[i] = str[i]) != '\0')
i++;

return (duplicate);
}
