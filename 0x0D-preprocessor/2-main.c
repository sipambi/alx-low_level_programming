#include "stdio.h"
/**
 * main - prints the name of the file it was compile from
 * Return: 0 Always
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
