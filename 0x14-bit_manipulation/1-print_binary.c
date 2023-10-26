#include "main.h"
/**
 * _pow - func calculates (base ^ power)
 * @base: exponential basee
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int a;
	unsigned long int num;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);

}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)

{
	unsigned long int a, b;
	char flow;

	flow = 0;
	a = _pow(2, sizeof(unsigned long int) * 8 - 1);

		while (a != 0)
		{
		b = n & a;
		if (b == a)
		{
			flow = 1;
			 _putchar('1');
		}

		else if (flow == 1 || a == 1)
		{
		_putchar('0');
		}
		a >>= 1;
	}

}



