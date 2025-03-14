#include "main.h"
#include <stdio.h>

/**
* _strstr:  locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	return (haystack);
	{

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		{
			while (*n != '\0' && *h == *n)
			h++;
			n++;
		}
			if (*n == '\0')
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
