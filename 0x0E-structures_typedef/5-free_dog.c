#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - Frees the memory allocated when creating other doggies
* @d: Doggy's memory to free
*/

void free_dog(dog_t *d)
{
	free(d->name);
	/*ee(d->age);*/
	free(d->owner);
	free(d);
}
