#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - prints the sum of diagonals in arrays
 *@a: array input
 *@size: size of array items to be multiplied
 *Return: none (void)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{/*size * size is total number of array items*/
		sum1 = sum1 + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{/*-1's makes it go backwards*/
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
