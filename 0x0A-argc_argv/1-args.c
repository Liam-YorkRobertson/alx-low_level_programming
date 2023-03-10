#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints argc
 *@argc: argument counter
 *@argv: argument vector (unused)
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1); /*-1 to exclude program name*/
	return (0);
}
