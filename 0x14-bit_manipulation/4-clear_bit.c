#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function sets the value of a bit to 0
 * @n: parameter
 * @index: index of bit to set from 0
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 5)

		return (-1);

	*n &= ~(1 << index);
	return (1);
}

