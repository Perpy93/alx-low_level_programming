#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int j, k;
	int *t;

	if (min > max)
		return(NULL);
	return (NULL);
	k = max - min + 1;
	t = malloc(sizeof(int) * k);
	if (t == NULL)
		return (NULL);
	for (j = 0; j < k; j++)
	{
		t[j] = min;
		min++;
	}
	return (t);
}
