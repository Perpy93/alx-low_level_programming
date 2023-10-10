#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return:pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; name[0] != '\0'; a++)
		;
	a++;
	dog->name = malloc(sizeof(char) * a);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	dog->owner = malloc(sizeof(char) * b);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);

}
