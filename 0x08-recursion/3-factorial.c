#include "main.h"
/**
 * factorial - return the factorial of a given number.
 * @n: the number to find factorial of
 *
 * Return: if n > 0 - the factorial n and if n < 0 - 1 no indicate an error.
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
