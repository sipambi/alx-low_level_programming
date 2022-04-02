#include "main.h"

/**
 * _strlen - returns the length off a string
 * @s: variable
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
