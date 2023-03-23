#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - gets sum of all arguments
 *@n: first argument of variadic function
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum; /*type has to match above*/

	if (n == 0)
	{
		return (0);
	}

	va_start(va, n); /*initialize the argument list*/
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(va, int); /*get next argument value*/
	}
	va_end(va); /*clean up*/
	return (sum);
}
