#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: initial string input
 *
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	size_t i, a;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= i; a++)
	{
		strdout[a] = str[a];
	}
	return (strdout);
}
