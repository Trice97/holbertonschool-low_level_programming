#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
/* Flag to indicate if the next char should be capitalized*/

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
/* Convert to uppercase*/
		}

		capitalize_next = 0
/* Reset flag*/

		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
				break;
			default:
				break;
		}
		i++;
	}

	return (str);
}
