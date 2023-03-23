#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numbers
 *@separator:  string (comma) between numbers
 *@n: number of strings passed
 *Return: none (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i; /*same type as parameter above*/

	va_start(va, n); /*initialize*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int)); /*get next argument value*/
		if ((i != (n - 1)) && (separator != NULL)) /*placing commas*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va); /*clean up*/
}
