#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: first variable
 * @accept: second variable
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = b;
	}

	return (a);
}
