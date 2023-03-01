#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char n[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(n);
	printf("%s", ptr);
	printf("%s", n);
	return (0);
}
