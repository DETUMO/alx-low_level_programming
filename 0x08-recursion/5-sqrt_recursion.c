#include "main.h"
#include "helper.h"

/**
 * _sqrt_recursion - func that returns the natural square root of a number.
 * @n: for number input
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);
	return (helper(n, 1));
}

/**
 * helper - finds the square root of two numbers
 *
 * @n: number
 * @i: incrementor
 *
 * Return: square root
 */

int helper(int n, int i)
{
	if (n * n > i)
		return (-1);
	else if (n * n == i)
		return (n);
	else
		return (helper(i, n + 1));
	return (1);
}
