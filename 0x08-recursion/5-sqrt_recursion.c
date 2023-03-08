#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, i));
}

/**
 * find_sqrt - finds the natural square root of a number recursively
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_sqrt(n, i + 1));
}
