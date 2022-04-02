#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: 1st variable
 * @needle: 2nd variable
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *hs = haystack, *n = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (hs);
		}
		needle = n;
		hs++;
		haystack = hs;
	}
	return (0);
}
