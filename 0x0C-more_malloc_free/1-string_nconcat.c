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
	int a;
	int s1len = 0;
	int s2len = 0;
	char *i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	a = malloc(sizeof(char) * (s1len + n) + 1);
	if (i == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			i[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			i[s1len + a] = s2[a];
		i[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			i[a] = s1[a];
		for (a = 0; a < n; a++)
			i[s1len + 1] = s2[a];
			i[s1len + a] = '\0';
	}
	return (i);
}






