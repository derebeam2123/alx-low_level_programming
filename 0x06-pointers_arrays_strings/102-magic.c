#include <stdio.h>

/**
 * main - main code
 * Return: always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here....
	 * Rememeber:
	 * - you are not allowed to use a
	 * - you are allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else then this line of code
	 */
	*(p + 5) = 98;
	/* ...so that prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
