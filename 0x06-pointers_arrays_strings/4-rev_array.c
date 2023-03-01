#include "main.h"

/**
 *reverse_array - function that reverses an array
 *@a: array
 *@n: number of elements in array
 *Return: none (void)
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++) /*i < n decreasing after each iteration
				  *if n is 5, then in the next iteration it will be 4
				  */
	{
		j = a[i]; /*assign first element to j*/
		a[i] = a[n]; /*first element now equals last element*/
		a[n] = j; /*now last element is the first element*/
	}
}
