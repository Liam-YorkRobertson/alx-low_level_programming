#include "main.h"

/**
 *leet - changes string into leet
 *@n: string to be changed
 *Return: n (char)
 */

char *leet(char *n)
{
	int i;
	int j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711"; /*in this exact order, since replacing*/

	for (i = 0; n[i] != '\0'; i++) /*for this string*/
	{
		for (j = 0; j < 10; j++)/*0 to 9 is 10, there are 10 in arr
					*this is the for statement to replace
					*text in string with num
					*/
		{
			if (n[i] == let[j])/* if n value is the same as value
					      *in let[], then that n value is
					      *is changed to the value in num[]
					      *with corr. j (position) value
					      */
			{
				n[i] = num[j];
			}
		}
	}
	return (n);
}
