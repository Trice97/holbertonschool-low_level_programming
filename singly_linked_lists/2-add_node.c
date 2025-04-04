#include <stdlib.h>
#include "lists.h"


unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s != NULL && s[len] != '\0')
	{
		len++;
	}
	return (len);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		new_node->str[i] = str[i];
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
