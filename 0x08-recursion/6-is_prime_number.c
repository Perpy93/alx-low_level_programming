#include "main.h"
/**
 * prime_a - Calculate if its a prime number
 * @a: number to be checked
 * @b: a divisor
 * Return: returns (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - Check if number is a prime number
 * @n: number to be checked
 * Return: 0 for composite and 1 for prime
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
