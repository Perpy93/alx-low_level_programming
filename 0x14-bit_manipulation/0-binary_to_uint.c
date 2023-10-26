#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: a binary number, or 0 if there is error
 */
unsigned int binary_to_uint(const char *b)
{
	int t;
	int num;

	num = 0;
	if (!b)
		return (0);
	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
			return (0);
	}
	for (t = 0; b[t] != '\0'; t++)
	{
		num <<= 1;
		if (b[t] == '1')
			num += 1;
	}
	return (num);

}

