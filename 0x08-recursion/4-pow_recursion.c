#include "main.h"
/**
 * _pow_recursion - return value of x^y
 * @x: power to raise
 * @y: power to be raised to
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
