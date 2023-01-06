#include <stdio.h>
/**
 * main - write a program that prints the number of arguments passed
 * @args: this is argument count
 * @argv: this is vector
 * Return: return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
