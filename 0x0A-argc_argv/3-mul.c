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
	int num1 = 0;
	int num2 = 0;
	int sum;

	if (argc == 3)
	{
		num1 = atoi(argv[1]); /*have to change from char to int*/
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
