#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings in arguments
 *@separator: string (commas) between other strings
 *@n: number of strings passed to function
 *Return: none (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *str;

	va_start(va, n); /*initialize*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char *); /*typecasting to char*/
		if (str == NULL)
		{
			printf("(nil)"); /*for if NULL*/
		}
		else
		{
			printf("%s", str); /*for string*/
		}
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator); /*for commas*/
		}
	}
	printf("\n");
	va_end(va);
}
