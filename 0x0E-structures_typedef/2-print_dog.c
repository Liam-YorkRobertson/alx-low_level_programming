#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints struct dog
 *@d: struct to print
 *Return: none (void)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	} /*age is a float, so don't compare like rest*/
	if (d->owner == NULL) /*can't use else if*/
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
