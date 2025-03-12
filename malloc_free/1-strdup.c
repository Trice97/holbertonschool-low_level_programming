#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
	return (NULL);

	while (str[len])
	len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	dup[i] = str[i];

	return (dup);
}
