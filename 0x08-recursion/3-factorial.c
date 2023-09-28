#include "main.h"
/**
 * factorial - gets factorial of a number
 * @n: a factor
 * Return - return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
