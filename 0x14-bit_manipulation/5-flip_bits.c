#include "main.h"
/**
 * flip_bits - return number of bit needed
 * to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, flipbit = 0;
	unsigned long int result;
	unsigned long int count = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		result = count >> a;

		if (result & 1)
		flipbit++;
	}
	return (flipbit);
}
