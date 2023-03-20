#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *free_dog - frees teh memory allocated to struct dog
 *@d: struct dog being freed
 *Return: none (void)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
