#include "calc.h"


/**
 * op_add - add to intger number
 * @a: int a
 * @b: int b
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: int a
 * @b: int b
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: int a
 * @b: int b
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the result of the division of a by b
 * @a: int a
 * @b: int b
 *
 * Return: a / b.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(99);
	}

	return (a / b);
}

/**
 * op_mod - the remainder of the division of a by b
 * @a: int a
 * @b: int b
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
