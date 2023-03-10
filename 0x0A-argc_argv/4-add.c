#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*main - prints arguments
*@argc: argument count
*@argv: argument vector
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;
	long unsigned int n;
	int sum = 0;
	char *a;

	if (argc > 1) /*excludes programme name*/
	{
		for (i = 1; i < argc; i++) /*loop for argc 2 and 3*/
		{
			a = argv[i];

			for (n = 0; n < strlen(a); n++)
			{/*for sum*/
				if (a[n] < 48 || a[n] > 57)
				{/*checks if char is digit or not*/
					printf("Error\n");
					return(0);
				}
			}
			sum = sum + atoi(a);
			n++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
