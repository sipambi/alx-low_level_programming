#include "stdlib.h"
#include "dog.h"
/**
 * init_dog - initialises a variable of type struct dog
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
 * Description: struction desc
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
