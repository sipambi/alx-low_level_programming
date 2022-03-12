#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing numbers in ascending order
 * Return: 0 if exited properly
 */
int main(void)
{
	int firstNumber;
	int secondNumber;
	
	while(firstNumber < 9)
	{
		secondNumber = 0;
		while(secondNumber < 9)
		{
			if(firstNumber != secondNumber && firstNumber < secondNumber)
			{
				putchar(firstNumber + 48);
				putchar(secondNumber + 48);
				if(secondNumber == 9 && firstNumber == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			secondNumber++;
		}
		firstNumber++;
	}
	putchar('\n');
	return (0);
}
