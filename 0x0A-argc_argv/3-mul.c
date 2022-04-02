#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: first arg
 * @argv: second arg
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) *atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
