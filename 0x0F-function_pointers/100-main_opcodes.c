#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own
 * @argc: number of argument
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);

	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(1);
	}
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes  - 1)
		{
			printf("102hhx\n", arr[i]);
			break;

	}
	printf("102hhx\n", arry[i]);
	}
	return (0);
}