#include <stdio.h>

/**
 *main - returns first fibonacci sequence numbers
 *Return: always 0 (success)
 */

int main(void)
{
	int i = 0; /*position of number*/
	long f = 1; /*value of fabonacci number (long because large number)*/
	long nf = 2; /*value of next fibonacci number*/

	while (i < 50)
	{
		if (i == 0) /*first position*/
		{
			printf("%ld", f);
		}
		else if (i == 1) /*second position*/
		{
			printf(", %ld", nf);
		}
		else
		{
			nf += f; /*nf = nf + f*/
			f = nf - f;
			printf(", %ld", nf);
		}
		i++;
	}
	printf("\n");
	return (0);
}
