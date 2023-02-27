#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: parameter to be swapped
 *@b: parameter to be swapped
 *Return: none (void)
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a; /*all these are dereferenced to get value*/
	d = *b;
	*a = d; /*these swap the values*/
	*b = c;
}
