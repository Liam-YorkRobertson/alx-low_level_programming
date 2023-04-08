#include "main.h"

/**
 *get_endianness - checks the endianness
 *Return: 1 for little, 0 for big
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}
