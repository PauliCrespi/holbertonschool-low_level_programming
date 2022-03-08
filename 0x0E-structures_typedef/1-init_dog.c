#include "dog.h"
#include <stdio.h>
/**
 *init_dog - function
 *@d : pointer
 *@name : pointer
 *@age : float
 *@owner : pointer
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
