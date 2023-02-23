#include <stdio.h>

/**
 *main - finds largest prime factor
 *Return: always 0 (success)
 */

int main(void)
{
	long n = 612852475143;
	long pf;

	for (pf = 2; n > pf; pf++) /*smallest prime factor is 2*/
	{
		while (n % pf == 0) /*prime factor results in no remainder*/
		{
			n = n / pf; /*dividing by prime factor each time*/
		}
	}
	printf("%ld", pf);
	putchar('\n');
	return (0);
}
