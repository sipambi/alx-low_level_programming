#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to searched
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			b = 1;
			return (s[i]);
		}
		i++;
	}

	if (b != 1)
	{
		return NULL;
	}
}
