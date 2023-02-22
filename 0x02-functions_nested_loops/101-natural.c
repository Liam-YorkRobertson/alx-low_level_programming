#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int pf = 0;
	int f;

	while (f < 1024)
	{
		if (f %3 == 0 && f % 5 == 0)
		{
			pf =+ f;
		}
		f++;
	}
}
