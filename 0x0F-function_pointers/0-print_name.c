#include "function_pointers.h"

/**
 *print_name - prints out a name
 *@name: name to be printed out
 *@f: pointer function
 *Return: none (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
