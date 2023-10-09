#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * @ptr: former pointer
 * @old_size: old size allocated by malloc
 * @new_size: allocated new size by the _realloc function
 * Return: pointer to nely allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	size_t i, max = new_size;
	char *olds = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
			return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		s[i] = olds[i];
	free(ptr);
	return (s);
}
