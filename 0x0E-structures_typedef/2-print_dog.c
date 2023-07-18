#include <stdio.h>
#include "dog.h"

/**
 *print_dog - function prints struct dog
 *@d: pointer variable
 *Return:void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	if (!d->name)
		printf("Name: (nil)");
	if (!d->age)
		printf("Age: (nil)");
	if (!d->owner)
		printf("owner: (nil)");
	else
	{
		printf("Name: %s\n Age: %f\n Owner: %s", d->name, d->age, d->owner);
	}
}
