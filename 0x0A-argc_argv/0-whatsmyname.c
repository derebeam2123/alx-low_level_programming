#include <stdio.h>
/**
 * main - write program to print name in lew line.
 * remove the path before the name of the program
 * @arc: this is the argument count
 * @argv: This is the argument vector
 * Returen: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
