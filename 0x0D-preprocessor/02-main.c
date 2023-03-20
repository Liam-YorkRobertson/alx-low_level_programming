#include <stdio.h>

/**
 *main - returns name of file used to compile programme
 *Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
/*c file, so don't have to guard*/
