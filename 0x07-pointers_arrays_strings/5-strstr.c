#include "main.h"
/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: search in haystack
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
char *str1, *str2; /*declaring variables*/

while (*haystack != '\0')
{
str1 = haystack; /*value*/
str = needle;

/*star while*/
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
return (str1);
haystack = str + 1;
}
return (0);
}
