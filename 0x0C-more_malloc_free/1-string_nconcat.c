#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements concatenates from s2
 * Return: pointer to a new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *i;

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
	i = malloc(sizeof(char) * (a + b + 1));
	if (i == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		i[c] = s1[c];
	for (c = 0; c < a; c++)
		i[c + a] = s2[a];
	i[a + b] = '\0';
	return (i);
}






