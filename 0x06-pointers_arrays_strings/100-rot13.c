#include "main.h"

/**
 *rot13 - encodes a string using rot13 cipher
 *@n: chars of string to be encoded
 *return: n (char)
 */

char *rot13(char *n)
{
	/*same principle as last task*/
	int i;
	int j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == let[j])
			{
				n[i] = rot[j];
				break;/*immediate exit of this loop*/
			}
		}
	}
	return (n);
}
