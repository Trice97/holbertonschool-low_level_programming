#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = _strdup(name);
	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
