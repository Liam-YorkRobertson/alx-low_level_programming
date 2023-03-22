#include <stdio.h>
#include <stdlib.h>

/**
 *main - returns own opcodes
 *@argc: arguent counter
 *@argv: argument vector
 *Return: 0 (success)
 */

/*had to get help with this*/
int main(int argc, char *argv[])
{
	int i, bytes;
	char *arr;

	if (argc != 2) /*only want program name and one other argument*/
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]); /*converts string to int*/
	if (bytes < 0) /*can't have negative bytes*/
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main; /*i think we are typecasting main*/
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]); /*notes explain %02hhx*/
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
