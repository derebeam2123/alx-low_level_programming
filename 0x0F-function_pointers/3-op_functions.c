#include "3-calc.h"
/**
 * op_add - integer
 * @a: integer
 * @b: integer
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - integer
 * @a: integer
 * @b: intger
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - integer
 * @a: integer
 * @b: integer
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return 2 integer
 * @a: integer
 * @b: integer
 * Return: quotient.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - integer
 * @a: integer
 * @b: integer
 * Return: remaider.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
