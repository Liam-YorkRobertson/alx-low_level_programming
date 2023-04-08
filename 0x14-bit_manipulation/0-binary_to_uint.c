#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - converts binary to decimal
 *@b: binary to be converted
 *Return: dec (success), 0 failure
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int dec;

	if (b == NULL)/*task failure case*/
	{
		return (0);
	}

	for (i = 0; b[i]; i++)/*task failure case*/
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
	}

	dec = 0;
	for (j = 0; b[j]; j++) /*calculation*/
	{
		dec = 2 * dec + (b[j] - '0');
	}

	return (dec);
}
