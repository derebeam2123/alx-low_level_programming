#include "main"
#include <stddef.h>
/**
 * _strpbrk - string
 * @s:string
 * @accept: byts
 * Return: 0 or 1
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, pos, Z = 0;
	for (i = 0; s[i] != '\0'; i++)
		;
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
			{
				if (k <= pos)
				{
					pos = k;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
