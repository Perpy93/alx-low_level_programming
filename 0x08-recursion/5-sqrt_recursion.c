#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @a: input of a number
 * @b: an iterator
 * Return: -1 or square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - this returns natural square root
 * of a number
 * @n: Number input
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
