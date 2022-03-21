#include "main.h"

/**
 * _strlen - returns the length off a string
 * @s: variable
 * Returns: length of the string
 */

int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
