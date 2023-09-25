#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @src: memory source area
 * @dest: memory destination
 * @n: number of bytes
 * Return: copied memory with changed n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
