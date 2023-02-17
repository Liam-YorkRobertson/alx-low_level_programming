#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int lstDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDgt = n % 10;
	if (lstDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDgt);
	}
	else if (lstDgt < 6 && lstDgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDgt);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstDgt);
	}
	return (0);
}
