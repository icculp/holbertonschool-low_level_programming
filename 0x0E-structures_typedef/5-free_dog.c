#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - Frees the memory allocated when creating other doggies
* @d: Doggy's memory to free
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
