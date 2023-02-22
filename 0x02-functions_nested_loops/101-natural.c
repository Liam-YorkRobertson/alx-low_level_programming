#include <stdio.h>

/**
 *main - return multiples of 3 and 5 that are less than 1024
 *Return: always 0 (success)
 */

int main(void)
{
	int nf = 0;
	int f;

	while (f < 1024)
	{
		if (f % 3 == 0 && f % 5 == 0)
		{
			nf += f;
		}
		f++;
	}
	printf("%d\n", nf);
	return (0);
}
