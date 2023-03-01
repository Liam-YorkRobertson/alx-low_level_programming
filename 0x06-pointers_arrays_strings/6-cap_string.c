#include "main.h"

/**
 *cap_string - capitalises the words of a string
 *@n: string to be capitalised
 *Return: n (char)
 */

char *cap_string(char *n)
{
	int ind;

	ind = 0;
	while (n[ind])
	{
		while (!(n[ind] >= 'a' && n[ind] <= 'z'))/*runs when NOT alph*/
		{
			ind++;
		}

		if (n[ind - 1] == ' ' ||
				n[ind - 1] == '\t' ||
				n[ind - 1] == '\n' ||
				n[ind - 1] == ',' ||
				n[ind - 1] == ';' ||
				n[ind - 1] == '.' ||
				n[ind - 1] == '!' ||
				n[ind - 1] == '?' ||
				n[ind - 1] == '"' ||
				n[ind - 1] == '(' ||
				n[ind - 1] == ')' ||
				n[ind - 1] == '{' ||
				n[ind - 1] == '}') /*-1, because before word*/
		{
			n[ind] = n[ind] - 32; /*capitalizes*/
		}
			ind++;
	}
	return (n);
}
