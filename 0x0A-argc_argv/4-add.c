#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - prints arguments
*@argc: argument count
*@argv: argument vector
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum;
	
	if (!(num1 > 0 || num1 < 9) || (num2 > 0 || num2 < 9))
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		sum = num1 + num2;
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
