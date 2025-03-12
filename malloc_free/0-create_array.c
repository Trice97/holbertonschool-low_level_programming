#include "main.h"
#include <stdlib.h>
/**
 * create_array - Crée un tableau de caractères et l'initialise.
 * @size: La taille du tableau à créer.
 * @c: Le caractère à utiliser pour initialiser le tableau.
 *
 * Return: Un pointeur vers le tableau alloué, ou NULL en cas d'échec.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)

		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		array[i] = c;

	return (array);
}
