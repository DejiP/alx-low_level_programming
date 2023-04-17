#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: return nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
