#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - prints anything
 *@format: types of args passed
 *Return: none (void)
 */

void print_all(const char * const format, ...)
{
	va_list va;
	int i = 0;
	char *str, *sep = "";

	va_start(va, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(va, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(va, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(va, double)); /*float bigger*/
					break;
				case 's':
					str = va_arg(va, char *); /*typecast to char*/
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(va);
}
