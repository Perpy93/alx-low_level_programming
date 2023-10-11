#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of two numbers
 * @a: First number
 * @b: second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return diffrence of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the diffrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the products of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the products of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * int op_div - Return the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -Returns remainder of division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

