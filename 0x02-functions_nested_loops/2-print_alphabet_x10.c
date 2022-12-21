#include "main.h"

/**
 * main - alphabet
 *
 * print_alphabet - print a - z ten tires
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
