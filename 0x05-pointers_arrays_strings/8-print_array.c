#include <stdio.h>
#include "main.h"

/**
 *print_array - prints the items of an array
 *@a: address of value of a
 *@n: number of array items
 *return: none (void)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1)) /*so that last doesn't have comma*/
		{
			printf(", ");
		}
	}
	printf("\n");
}
