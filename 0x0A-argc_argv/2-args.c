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
	int i = 0;

	while (i < argc) /*argv counts from 0, < excludes extra i from argc*/
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
