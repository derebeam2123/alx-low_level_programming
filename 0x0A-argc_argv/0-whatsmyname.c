#include <stdio.h>
/**
 * main - write a program that print name,followed by a lew line.
 * If ou rename the program,print new name, without having to compile it again
 * you should note remove the path before the name of the program
 * @argc: this is the argument count
 * @argv: This is the argument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
