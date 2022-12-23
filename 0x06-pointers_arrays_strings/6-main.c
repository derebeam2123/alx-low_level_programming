#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect best.\nhello world!0123456hello world\thelloworld.hello\;
char *ptr;

ptr = cap_string(str);
printf(" %s ", ptr);
printf(" %s ", str);
return (0);
}
