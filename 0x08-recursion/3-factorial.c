#include "main.h"
/**
 * factorial - factorial
 * @n: pointer
 * Return: factorial
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorail(n - 1));
}



