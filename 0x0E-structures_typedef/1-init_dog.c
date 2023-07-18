#include <stdio.h>
#include "dog.h"

/**
*init_dog - function initializes struct
*@d: void pointer variable
*@name: character variable for name
*@age: float variable
*@owner: char variable
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
