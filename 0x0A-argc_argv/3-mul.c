#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication;
 * @argc: number of arguments
 * @argv: array of vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, multiplication;

	multiplication = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multiplication = multiplication * atoi(argv[i]);
	}
	printf("%d\n", multiplication);
	return (0);
}
