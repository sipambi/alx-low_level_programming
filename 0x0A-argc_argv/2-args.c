#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: first arg
 * @argv: second arg
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
