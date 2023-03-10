#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints name of program
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
