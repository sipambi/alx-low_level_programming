#include "main.h"

/**
 * _strcat - concatenates two strings
 * dest: first string
 * src: second string
 * Return: returns a char
 */

char *_strcat(char *dest, char *src)
{
	char result[100];
	char *p = &result[];
	int i, j = 0;

	while(dest[i] != '\0')
	{
		result[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while(src[i] != '\0')
	{
		result[j] = src[i];
		i++;
		j++;
	}

	return p;
}
