#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
*free_dog - frees dogs
*@d: pointer variable to struct dog_t
*Return; void
*/

void free_dog(dog_t *d)
{
	if (d !== NULL)
	{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
	}
}
