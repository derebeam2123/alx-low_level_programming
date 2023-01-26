#include <stdio.h>
void _attribute_((constructor)) hard(void);

/**
 * hare - function executed before main
 * Return: no return.
 */

void hare(void)
{
printf("You beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
