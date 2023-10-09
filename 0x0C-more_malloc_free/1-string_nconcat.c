#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes concatenates from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *value;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b  = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	value = malloc(sizeof(char) * (a + b + 1));
	if (value == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		value[c] = s1[c];
	for (c = 0; c < b; c++)
		value[c + a] = s2[a];
	value[a + b] = '\0';
	return (value);
}






