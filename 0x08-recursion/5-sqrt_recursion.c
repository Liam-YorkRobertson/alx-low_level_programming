#include "main.h"

/*have to use another function to check the values*/
/**
 *_find_root - finds square root of number
 *@i: is the same as n (see _sqrt funciton)
 *@n: number that increases from one to find natural square root
 *Return: square root
 */

int _find_root(int i, int j)
{
	if (j * j == i) /*is natural square root*/
	{
		return (j);
	}
	else if (j * j > i) /*can't have natural square root if > i (i is n)*/
	{
		return (-1);
	}
	return (_find_root(i, j + 1)); /*loops to find natural sqrt*/
}

/**
 *_sqrt_recursion - returns natural square root of number
 *@n: number we want square root of
 *Return: dependant on _find_root
 */

int _sqrt_recursion(int n)
{
	return (_find_root(n, 1));
}
