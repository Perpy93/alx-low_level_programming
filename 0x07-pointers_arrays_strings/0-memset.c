#include "main.h"

/**
 * _memset - function that fills memory
 * @n: number of bytes of memory
 * @b: constant byte
 * @s: memory area
 * Return: returns changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
